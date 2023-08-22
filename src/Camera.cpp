// Camera.cpp

#include "Camera.h"

namespace vnm
{
    // Calculates and returns LookAt matrix
    DirectX::XMMATRIX Camera::CalcLookAt() const
    {
        // TODO
        DirectX::XMMATRIX result = DirectX::XMMatrixIdentity();
        return result;
    }

    void Camera::Pitch(float radians)
    {
        DirectX::XMMATRIX rotation = DirectX::XMMatrixRotationAxis(mRight, radians);
        mForward = DirectX::XMVector3Transform(mForward, rotation);
        mUp = DirectX::XMVector3Transform(mUp, rotation);
    }

    void Camera::Yaw(float radians)
    {
        DirectX::XMMATRIX rotation = DirectX::XMMatrixRotationAxis(mUp, radians);
        mForward = DirectX::XMVector3Transform(mForward, rotation);
        mRight = DirectX::XMVector3Transform(mRight, rotation);
    }

    // Moves camera in direction of forward vector
    void Camera::MoveForward(float delta)
    {
        DirectX::XMVECTOR scale = DirectX::XMVectorSet(delta, delta, delta, 0.0f);
        DirectX::XMVECTOR scaledForward = DirectX::XMVectorMultiply(mForward, scale);
        mPosition = DirectX::XMVectorAdd(mPosition, scaledForward);
    }
}
