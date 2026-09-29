# OCL2Cypher examples

Thư mục này chỉ chứa các model, snapshot và corpus phục vụ trực tiếp cho
OCL2Cypher.

## Case studies

- `carrental`
- `case-study-oclcypher`
- `ER2REL`
- `families-to-persons-correctness-case-study`
- `medical`
- `medical-system-yte`
- `ocl2cypher-correctness-case-study`
- `uml-ocl-comprehensive-case-study`

## Input-adapter examples

| Thư mục | Mục đích |
|---|---|
| `shop-use-soil` | USE schema với snapshot SOIL dạng thường, truyền thống và block |
| `shop-uml-ocl` | UML/XMI class model với OCL nằm ở file riêng |
| `shop-ecore-xmi` | Ecore metamodel với XMI object model |
| `advanced-adapters` | Qualifier và association class qua USE/SOIL và UML/OCL |
| `stable-id-duplicate` | Hai object dùng cùng raw identity; kiểm tra hậu tố `__1` |
| `stable-id-collision` | Raw identity đã chiếm hậu tố; kiểm tra bỏ qua sang `__2` |
| `unsupported-operations` | Boundary case: operation declaration phải bị từ chối rõ ràng |
| `unsupported-prepost` | Boundary case: operation context/precondition phải bị từ chối rõ ràng |

Mỗi thư mục input-adapter là một fixture tự chứa. Hai boundary case cuối có
snapshot `empty.soil` riêng và được kỳ vọng trả về diagnostic, không phải compile
thành công.
