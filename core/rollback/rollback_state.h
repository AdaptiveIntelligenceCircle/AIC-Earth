#pragma once

namespace aic :: rollback
{
    enum class RollbackState
    {
        NOT_SUPPORTED,
        AVAILABLE, 
        IN_PROGRESS, 
        COMPLETED, 
        FAILED
    }; 
} // namespace aic :: rollback