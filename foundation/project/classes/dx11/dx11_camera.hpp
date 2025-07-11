/***********************************************
* File: dx11_camera.hpp (direct x 11 camera)
* 
* Purpose: a moveable camera in 3d
*
* Project: core
*
************************************************/

#pragma once
#include NAMES_INCLUDE
#include ALL_DEPENDS_INCLUDE_PATH


namespace core {
    class Camera {
    public:
        Camera() = default;
        Camera(float fovDegrees, float aspectRatio, float nearZ, float farZ);

        void UpdateView();
        void MoveForward(float amount);
        void MoveRight(float amount);
        void MoveUp(float amount);
        void Rotate(float pitchDelta, float yawDelta);

        DirectX::XMMATRIX GetViewMatrix() const;
        DirectX::XMMATRIX GetProjectionMatrix() const;
        DirectX::XMVECTOR GetPosition() const;

    private:
        DirectX::XMVECTOR m_position;
        float m_pitch; // radians
        float m_yaw;   // radians

        DirectX::XMMATRIX m_view;
        DirectX::XMMATRIX m_projection;
    };

    
}