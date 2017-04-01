#include <mitsuba/python/python.h>

MTS_PY_DECLARE(ETransportMode);
MTS_PY_DECLARE(EMeasure);
MTS_PY_DECLARE(Scene);
MTS_PY_DECLARE(Shape);
MTS_PY_DECLARE(ShapeKDTree);
MTS_PY_DECLARE(PositionSample);
MTS_PY_DECLARE(DirectionSample);
MTS_PY_DECLARE(DirectSample);

PYBIND11_MODULE(mitsuba_render_ext, m_) {
    (void) m_; /* unused */

    py::module m = py::module::import("mitsuba.render");

    MTS_PY_IMPORT(ETransportMode);
    MTS_PY_IMPORT(EMeasure);
    MTS_PY_IMPORT(Scene);
    MTS_PY_IMPORT(Shape);
    MTS_PY_IMPORT(ShapeKDTree);
    MTS_PY_IMPORT(PositionSample);
    MTS_PY_IMPORT(DirectionSample);
    MTS_PY_IMPORT(DirectSample);
}
