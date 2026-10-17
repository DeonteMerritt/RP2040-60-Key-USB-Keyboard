# Fabrication Assumptions and Validation

## Status
Editable mechanical concept delivered and accepted for concept-level handoff after focused independent-review closeout on 2026-10-17; NOT fabrication-qualified. Product: Merritt Robotics Inc., RP2040 60-Key USB Keyboard II. No keyboard PCB, schematic, components or electrical nets were created. Prior concept sketch retained; see **Mechanical Concept** (document short ID 24). Acceptance includes the explicitly classified scene-rounding exception below, not a blanket zero-interference claim.

## Orbitable assemblies and geometry evidence
- [Assembled keyboard — editable source and orbitable model](https://cdn.flux.ai/document_assets/keyboard-assembled-e69af4bd-fc94-43d4-96b2-c0eb453c136f.build123d). Asset UID `29811b65-0d10-4f35-9717-455c69d867f7`.
- [Exploded keyboard — separate presentation transforms](https://cdn.flux.ai/document_assets/keyboard-exploded-3d557f55-e168-4895-96de-ad8b59e7778b.build123d). Asset UID `77b873bf-a3ca-4066-800d-569414feb04d`.
- [Actual assembled geometry render](https://cdn.flux.ai/document_assets/assembled-geometry-708c64c9-d8d5-4dca-8e20-d2e41edfe770.png). Rendered from authored CAD tessellations, not generated concept art.
- [Exploded geometry render](https://cdn2.flux.ai/flux-comment-files/files/commentFileId-ee9c1b85a96bd3ad1999ca129d5ba27a01e4ee1cb3202b00282c9c454dd80ee6.png?GoogleAccessId=fleet-worker%40graviton-mvp.iam.gserviceaccount.com&Expires=4945797860&Signature=g4z%2B4mxdDlMLWwHHbK5fKcTz1z%2FEaLpPABeefyT5RVvDL6bAnbvjeN1KQCgACXJ2VaR0RH9P5BjyMqQrDXqi%2FyJMM5y21pjXEIRn2npqi9NEoth82qoCX8JGucpYz6LZgCQYagtgeQE9dsvG1abH2%2BhJjPO%2B2GMWya%2BWcKxFUuUaOnYuq5p3i%2Fy4uXPdsfkCT0Bs2evZF8QPqbnWewucf5RrKGWPTvlnKtjGVrGvUrQ14%2FTH62L%2BcPmPH14FtTMoepammYd8XVy%2F1a3zSlw3gwAah6RrlDexEpV%2Ffp1jVHewLaHy036ERVokHtolVLWyertmkYRLWTyMVAgdg1SzQg%3D%3D). This render was produced and inspected but not yet registered as a project asset.
- [Placed geometry validation JSON](https://cdn2.flux.ai/flux-comment-files/files/commentFileId-0788774d43f11d726db8ac679ddd3d3aeb43669d5606e09b5555732a4f98293e.json?GoogleAccessId=fleet-worker%40graviton-mvp.iam.gserviceaccount.com&Expires=4945797917&Signature=l%2BrcRXrRQL4qLPTtfgq3pWRwyTEma%2BhZvpJVXXv6WNvqf6cSr%2FTTT8w6c0BfJgQdEla3wXBP%2FPOnEkwGMORE7H2FKj6Fly94cLoLKA95h5UwRc0IGlF%2FMakMpXvtB2h22tcy6OcR4KIhKG0VlchNDN3%2BWiEDyhGTd3rB1w4ZreaPmkQtF4pMh%2F1Xft5C2GTBMDuhtYk2ObED960WCGYZjX3LYwyRKfpj8xKuqr%2BRzB44lo7QPQt7dXyktN6%2FWdSDscabCkfwc3Mxc7cEK9Z7S37wjwsno4BHKhRn220U9twRN4%2BXNjqJ81U2eZ%2B8SocM6D8J6Dp9djUc0DDmR24jfA%3D%3D).

The assembly compounds are convenience preview/export assets, not duplicate installed nodes. Exploded offsets do not modify installed part geometry. Pico is visible through the exploded plate/open shell but remains partly occluded from some camera angles; orbit to inspect it.

## Dimensions and clearances (mm)
| Item | Value | Basis / status |
|---|---:|---|
| Complete installed bounds | 250 × 120 × 51.9 | PASS, compiled pipeline STEP reimport |
| Installed Z bounds | -11.4 to 40.5 | Pico PCB top is Z=0; +Y is rear |
| Key count / grid | exactly 60; 5 rows × 12 columns | PASS: 60 cap solids, 60 switch solids |
| Both pitches | 19.05 | PASS: exported cap center spacings measured |
| Keycap envelope | 18 × 18 × 8, taper to 15 × 15 top | Estimated generic 1u envelope, identical for every key |
| Keycap gap | 1.05 | Derived; no Space/Enter/Shift size exceptions |
| Cap-array bounds | 227.55 × 94.2 × 8 | Pipeline report |
| Plate | 250 × 120 × 1.5 | Separate aluminum sheet; Z=24 to25.5 |
| Switch apertures | 60 × 14 square | Nominal MX drawing; shop kerf / chosen switch NOT VERIFIED |
| Switch envelope bottom | Z=15.5 | Conservative pin-inclusive assumption, not a detailed switch model |
| Shell wall / bottom | 3 / 2.4 | Ordinary features; local connector wall reduced to 1.3 |
| Shell corner radius | 6 | Constrained by perimeter fastener geometry |
| Bottom joint | 3 engagement; 0.2 radial clearance | PROVISIONAL loose-slip FDM fit |
| Reserved wire/diode slab | 225 × 94 × 9; Z=5 to14 | PASS: zero overlap with all six placed major-part groups |
| Slab to pin-inclusive envelopes | 1.5 vertical | Derived margin; wiring must stay within reserved zone |
| Pico highest envelope to slab | at least 2.27 vertical | Derived from 2.73-high connector |
| Pico / shell minimum distance | 0.5 | PASS on exported envelope geometry |
| Switch / Pico minimum distance | 14.5 | Measured local STEP pair; 12.77 conservative vertical envelope difference |
| Pico underside to ordinary floor | 8 | PCB underside Z=-1; floor inner face Z=-9 |
| USB opening | 13 wide ×8 high, center Z=1.365 | Bounded concept assumption |
| USB receptacle face | Y=59.5; rear outside Y=60 | 0.5 recess; outward +Y, insertion -Y |
| Plug body sweep | 12 ×7 cross section, 30 longitudinal | Estimated, exact cable NOT VERIFIED |
| Plug sweep / shell clearance | 0.5 | PASS for bounded envelope only; zero interference |
| Plug sweep / bottom clearance | 1.42965 | PASS for bounded envelope only |
| Exploded bounds | 250 ×120 ×162.7 | PASS, compiled STEP; Z=-46.2 to116.5 |

## Part asset inventory
Every link below is an independently editable `.build123d` source and provides an orbitable card and derived exports. Assets are referenced by name in nodes; UIDs are for audit only.

| Part | Asset link | Asset UID |
|---|---|---|
| Upper shell | [keyboard-shell.build123d](https://cdn.flux.ai/document_assets/keyboard-shell-3e722baf-ec0b-4ab3-acfe-5ffd6b315ecb.build123d) | `36e910f7-c50c-4b3a-ae2a-cb5fc570392d` |
| Corrected bottom | [keyboard-bottom-fit.build123d](https://cdn.flux.ai/document_assets/keyboard-bottom-fit-824faf84-ef77-4f30-9390-22ddfcf8d05e.build123d) | `8dc776e7-d16f-430a-b7bd-9d036409a614` |
| MX plate | [keyboard-plate.build123d](https://cdn.flux.ai/document_assets/keyboard-plate-3660a051-e260-4191-be6b-0fe847b212a7.build123d) | `203c4c8e-099d-48ae-b5ad-4c76517a940e` |
| 60 keycap solids | [keyboard-keycaps.build123d](https://cdn.flux.ai/document_assets/keyboard-keycaps-a2e31ab8-8d72-4fca-82f9-da94658f61ea.build123d) | `2818ae71-9ea1-4cde-8d65-4af2fb0d8a14` |
| 60 switch solids | [keyboard-switches.build123d](https://cdn.flux.ai/document_assets/keyboard-switches-9e30a512-22c8-4763-a3e7-b6e61e3ff2c5.build123d) | `b428fd0f-3755-4b64-a0a0-70ab68eaa2c3` |
| Original Pico envelope | [keyboard-pico.build123d](https://cdn.flux.ai/document_assets/keyboard-pico-ad585947-dbc8-41db-ba28-b045968bd345.build123d) | `a23d3d8d-1fe4-4ba5-8b3c-1cd2042d16c5` |
| Case / plate screw | [keyboard-case-screw.build123d](https://cdn.flux.ai/document_assets/keyboard-case-screw-2f317b29-c3ca-452d-9d42-1b645c7197ab.build123d) | `c25f1f6e-2bd9-43a8-b1eb-cf3bd4e03466` |
| Corrected Pico screw | [keyboard-pico-screw-fit.build123d](https://cdn.flux.ai/document_assets/keyboard-pico-screw-fit-b942dd90-acad-4733-ab26-87dda9996b8f.build123d) | `d534761c-e33f-44c0-a236-e10b0b883575` |
| Pico insert | [keyboard-pico-insert.build123d](https://cdn.flux.ai/document_assets/keyboard-pico-insert-bd5d3860-77b6-4f39-b038-280209132e5e.build123d) | `4ef7119d-ed66-4d14-83d6-4b4e759c5aeb` |

Superseded bottom and M2×4 screw assets were removed; use the `-fit` assets. Keys and switches are separate solids within family compounds, currently one installed node per family, NOT 120 individually togglable model nodes. This is a remaining granularity limitation relative to a strict every-piece node interpretation.

## Hardware and support plan
Hardware visible by default (`SHOW_HARDWARE=True`). No threads or insert knurl teeth are modeled; head recesses are simplified crosses. Nominal head sizes need confirmation against actual purchased hardware.

| Hardware | Quantity | Installation |
|---|---:|---|
| ST2.9 ×9.5 self-tapping pan screws; head Ø5.6 ×2.2 | 14 | Plate into shell, head seat Z=25.5, shank down |
| Same ST2.9 ×9.5 | 14 | Bottom into shell, head seat Z=-9, rotation X=180°, shank up |
| M2 ×5 machine screws; simplified Ø3.5 ×2 head | 2 | Non-USB Pico mounting holes, head seat Z=0 |
| M2 short heat-set inserts, Ø3.63 ×3.18 | 2 | Flush with support tops / Pico underside at Z=-1 |

ST2.9 pilots Ø2.3, top blind bores Z=16..24; lower blind bores Z=-6..2. Nominal top thread engagement 8; bottom engagement 6.5. Bottom counterbores Ø6.4, 2.4 deep; heads end at Z=-11.2, recessed 0.2 from exterior. M2 insert bores Ø3.2, depth5.18 below support top; M2 screw tip Z=-5, bore floor Z=-6.18, tip margin1.18. Insert geometry follows the [SPIROL Series 29 short fallback](https://www.spirol.com/assets/files/ins-threaded-inserts-design-guide-us.pdf); hole fit, thermal insertion and torque need coupons.

Perimeter fixing XY positions: x={-119,-71.4,-23.8,23.8,71.4,119} at y=±54, plus x=±119 at y=0. Maximum adjacent perimeter span54 (<60). Two Pico retained supports at (±5.7,9.2), two flat supports at (±5.7,56.2): four support points, 47 longitudinal and 11.4 transverse spacing. No invented Pico mounting holes. USB-end holes have support only, avoiding screw heads alongside the connector. Insert use is selected because original Ø2.1 Pico holes do not admit the ST2.2 close-clearance fallback. Exact underside solder keep-outs and screw driver access against the real Pico remain NOT VERIFIED.

## Validation evidence and severity
- **PASS — source and asset creation:** 11 current analytic model assets, including two full assembly compounds; all uploaded successfully through the real source compiler. Each shell/bottom/plate is one solid. Both assembly exports contain158 solids.
- **PASS — exact grid:** cap array has60 identical18×18×8 solids; exported STEP centers give12 X positions,5 Y positions and19.05 pitches. X extrema±104.775, Y extrema±38.1.
- **PASS — local exported STEP mating:** all15 pairs among shell, bottom, plate, cap array, switch array and Pico have zero intersection volume after repair. Intentional contacts are shell-bottom, shell-plate, bottom-Pico, plate-switch shoulder and cap-switch envelope. Tolerance for numerical overlap classification in further checks:1e-5 mm³; distances nominal, not manufacturing tolerances.
- **PASS — saved scene and placement:** `get_nodes` read back38 enabled models, ROOT parent, unit scale1, Z-up. Six major-part nodes at(0,0,0);14 plate screws at listed XY,Z25.5;14 bottom screws at listed XY,Z-9,X rotation180°;2 Pico screws at(±5.7,9.2,0);2 inserts at(±5.7,9.2,-1). No model node contains a whole duplicate assembly.
- **PASS — actual geometry viewing:** native project render returned38/38 models, no board, at isometric and rear views. Visually inspected gray uniform grid, black shell, exposed plate hardware and centered rear USB opening. Independent CAD render saved above. This is renderer evidence; a live user-browser interaction/drag test was NOT VERIFIED.
- **PASS — pipeline STEP inspection:** downloaded compiled assembled and exploded STEP files were reimported in OpenCascade: valid=True,158 solids each, matching dimensions. Sum of solid volumes513438.17095 mm³ in each. The upload report's Compound aggregate volume192302.1569 mm³ differs from summed per-solid volume; do not use that aggregate for mass or material ordering.
- **PASS — reserved wire zone:** compiled placed-part check found zero overlap for225×94×9 slab at Z5..14 with all six groups. Wires, insulation, service loop and actual diodes are NOT modeled; this is reserved space, not wiring design verification.
- **PASS — bounded plug access:** straight 12×7×30 envelope from mating-face rearward has zero shell/bottom/plate overlap; shell clearance0.5. Exact plug, cable bend radius and side-load relief NOT VERIFIED.
- **INFO — hardware/body exception review completed:** all44 recorded rows reviewed:28 self-tapping screw/pilot intersections,2 heat-insert/bottom thermal-fit intersections, and14 bottom-screw seating residuals caused by rounded scene rotations. No recorded row remains unclassified. The14 residuals still FAIL the raw1e-5 mm³ automatic cutoff; they are accepted as a documented numerical seating-contact exception for concept review only, as proved below. This is not a physical fit/torque qualification or an additional hardware-to-hardware study.
- **WARNING — process qualification:** complete standards compliance is not claimed. Bed-edge chamfers and the specified cosmetic shadow-line feature were not added; boss roots use gradual conical transitions rather than qualified concave root fillets. Rear supports taper through their upper2mm. These details need review/refinement before manufacturing release.
- **WARNING — FDM findings:** pipeline reports down-facing faces on shell and bottom; they require orientation/slicer review. Purchased hardware, switch envelopes, Pico and presentation compounds are not intended to be printed as one object. Floating-solid warnings in exploded/assembly compounds are expected presentation structure, not a claim of printability.
- **NOT VERIFIED:** actual switch latches and pins, selected keycap underside/stem/full-travel clearance, exact cable, Pico solder landings, screw vendor dimensions, thread engagement under torque, press/heat fits, structural flex under typing, drops, thermal suitability, ingress protection, printer volume, warpage, support removal and printed assembly. No functional keyboard or firmware was built.

## Fabrication and assembly guidance
Enclosure default: black PETG,0.4 nozzle, provisional0.2 layer height. Printer and build volume unknown: parts require at least250×120 XY plus brim/margins; a220mm square bed is insufficient without a redesigned split. No unsupported fit or strength claim.

Bottom: exterior broad plane on bed, supports upward. Inspect counterbore bridging, keep insert bores and PCB contact faces clear of support. Shell: consider plate-facing surface on bed (flip around X for printing only) to avoid unsupported lower fastening-pad geometry; evaluate rear13mm opening with accessible removable support. Installed coordinate transforms remain unchanged by print orientation. Accessible support inside the open shell is removable; no trapped cavities. Add/process-check bed-edge treatment before production.

Plate: separately fabricated1.5mm aluminum sheet, deburred; precision laser/waterjet preferred for square MX apertures. A milling process must accommodate internal corners without exceeding switch requirements; use a coupon and chosen-switch drawing. Not an FDM plate or a keyboard PCB.

Assembly: qualify fit coupons; install both Pico inserts; retain original Pico on four supports with two M2×5 screws; fit switches to plate; hand-wire and insulate using the reserved slab with service slack toward Pico; screw plate to upper shell; mate bottom carefully without pinching wires and fit14 recessed bottom screws. For service, unplug USB, remove bottom screws and lower bottom slowly because Pico and wiring move with it. Self-tapping closure life is unqualified; repeated heavy service may warrant a later insert redesign. Neither PCB mounting nor typing loads have been structurally tested.

## Editing and downloads
The assembled `.build123d` is the most complete master source. Driving dimensions are module-level constants near the top; functions return shell, bottom, plate, cap array, switch array, Pico envelope and hardware. `assembly(False)` preserves installed geometry; `assembly(True)` applies presentation offsets only. To export a single part, set module-level `result` to the corresponding function. Each saved part source is self-contained; copies do not synchronize automatically. Earlier unaffected part sources may contain older unused helper constants, so regenerate coordinated changes from the assembled master, then upload only changed results.

Download `.build123d` source from the asset card and edit Python using build123d locally, or submit a revised source for recompilation. This is editable parametric source, NOT a claim of an in-browser CAD feature-tree editor. STEP/BREP provide analytic exchange geometry, not editable Python feature history; mesh exports are tessellated. Card download options include source, STEP, BREP, STL, OBJ,3MF and GLB. Compiled assembled and exploded STEP downloads were actually inspected; other format UI downloads were not manually exercised. Do not print the full assembly compound or the solid switch/keycap envelopes as mechanisms.

## Scope completion and continuation record
**Completed:** source research, retained concept record, mechanical concept, 60-key grid, separate shell/bottom/plate/Pico/family assets, all32 hardware instances as enabled nodes, full assembled/exploded preview assets, actual geometry render, readback, local mating checks, compiled STEP validity and reserved-envelope checks.

**Incomplete:** individually togglable nodes for each cap/switch (currently grouped compounds), remaining FDM/standard finishing details, physical qualification. Hardware/body exception review is now completed. These limitations do not invalidate the useful editable concept, but it is not ready for unreviewed fabrication.

Repair count: **1 of maximum2 geometry cycles used**. Initial bottom fastening pads overlapped shell lip398.740808 mm³. Cycle1 clipped the pad envelope to243.6×113.6 and changed Pico M2×4 toM2×5 with a deeper bore; pair recheck zero overlap. **1 of1 presentation recovery used**: removed frame-edge caption from independent renderer; final assembled/exploded images passed framing checks. Do not reset these counters in a resumed session.

Computer `keyboard-mechanical` (mech image), files under `/root/keyboard`: `design.py` master, standalone `.build123d`/STEP/STL exports, `export.py`, `check.py`, `render.py`, `verify_installed.py`, official Pico PDF and STEP. Final saved scene: `document_assets/rp2040-60-key-usb-keyboard-ii-scene-c632d7e76f240e326905c33589e77472.fluxscene`;38 models. Final check job `07376886-5235-466a-badd-19e8f5000e6e` finished exit0. Full report `/root/keyboard/placed/validation.json`; log `/root/keyboard/placed-validation.log`. Read this full JSON first on resumption, especially `hardware_exceptions`, before claiming every screw path passes. No further geometry changes were made after the installed readback.

The earlier execution ended before final report review; the focused closeout below supersedes that pending-review status. No additional phase checkpoint is needed for the already-authorized mechanical concept scope.

## Focused review closeout — 2026-10-17
**Completed:** localized contact classification, corrected-master verification, recovered preview/edit instructions, refreshed38-node tree readback and acceptance records. **Failed automated test, disposition recorded:**14 raw bottom/head overlap values exceed the unchanged1e-5 mm³ cutoff. **Unattempted in this closeout:** geometry redesign, new render, live browser orbit test and physical fabrication/qualification. No geometry or node was changed; repair counters remain1/2 geometry and1/1 presentation recovery.

### Bottom screw seating: root cause and acceptance evidence
Read-only measurement used the original placed pipeline STEP solids and saved `.fluxscene` transforms, not new substitute geometry. See [durable contact-review JSON](https://cdn.flux.ai/document_assets/keyboard-contact-review-da5aaeb5-f965-48e4-9f29-15c0c04c885b.json); original exported report: [contact-review.json](https://cdn2.flux.ai/flux-comment-files/files/commentFileId-de3c028127ebba394d6004540fbadbefe828b5be81212c0fdf61ede6c2b52993.json?GoogleAccessId=fleet-worker%40graviton-mvp.iam.gserviceaccount.com&Expires=4945801870&Signature=jip27EHFxUE8bWaKbYJLAQrRVLzhK7RjMEqjrtxPfXPbKe3dirtuwawdggERbZeMxDg154SGpdDfwKMCb8NuM%2Fhf%2FB0n1L8NHKsIsB9%2FVQPmy0TX6ew9PtvS5FV5qIdA1ky8RUDfLQYzmF9BHHVJnOjNm0tLzOqeaH8NLWc5GrJNUNNCAVSQsmmwD5ZBD8qxJpdkUpm3TUy3dTGe0i63WzS99XJN04Ox0BlMzJBVFc8QLh5R9%2BqS%2B%2FbfK%2BCQ3RFiVfV9t9Fb7nEAKvV4hv7XTIHa34uhI9%2BDawH0yw%2FVtRbCDR0hLDL2RMelrc26zKjaQW8haqniSmv3nAVou149%2Fg%3D%3D). The earlier validation JSON remains unchanged for audit.

All14 bottom screws have nominal X rotation180° in the freshly read node tree, but the saved scene serializes it as3.14159 rad rather than pi. The angular deficit is2.653589793e-6 rad (0.000152039496°). With a2.8 mm head radius this tilts the nominal Z=-9 seat by at most0.000007430051 mm at the edge. Thus the rounded-transform scene has a tiny real mathematical wedge, not a source-design clash or a manufacturing tolerance allowance.

| Check | Result | Disposition |
|---|---|---|
| Raw14 placed overlaps | 0.0000368845260–0.0000388381118 mm³; minimum distances all0 mm | FAIL raw1e-5 mm³ cutoff; retained verbatim |
| Diagnostic exact180° rotation, same imported screw/bottom solids and positions | All14 overlap volumes0 mm³; all14 distances0 mm | PASS intended seating contact |
| Diagnostic outward translation0.00001 mm of rounded-transform screw | All14 overlaps0 mm³ | Confirms highly localized seat sliver; not installed as a repair |
| Diagnostic inward translation0.00001 mm | Overlaps approximately0.00015546–0.00015558 mm³ | Expected increasing seat penetration |
| Imported bottom BREP tolerances | Faces1e-7 mm; maximum edge/vertex1.26804084e-7 mm | Smaller than tilt; do not dismiss as generic BREP fuzz |

**Reviewed disposition: INFO, numerical seating-contact exception accepted for this mechanical concept.** The root cause is finite scene-angle serialization; replacing that angle only in the diagnostic yields intended touching surfaces with zero overlap. No global volume threshold was raised, no arbitrary clearance was added, no geometry was rebuilt, and the saved scene was not silently altered. Recheck if transforms or parts change. All30 other recorded exceptions correspond to intentional modeled pilot/insert engagement; they do not establish reliable printed threads or thermal fits.

### Corrected master and saved scene
Downloaded the actual saved assembled, exploded and corrected-bottom sources. Their parsed definitions/constants are identical except the final result selector: `assembly(False)`, `assembly(True)` and `bottom()`. All include the corrected fastening-pad clip `rr(243.6,113.6,4,-9.3,2.8)`. Master source SHA-256: `2c459c91b3f141e498cca0e30acd4f0a5eb4581e43caac3e8f34e895064f4de1`.

The compiled assembled STEP contains exactly one solid matching the corrected-bottom bounds. Both directional solid differences are0 mm³; both bottom volumes are76266.38846659842 mm³. **PASS: assembled master and its compiled asset use the corrected bottom**, not merely an updated standalone part. Exploded source uses the same corrected definitions with presentation transforms only.

Fresh node-tree inspection again returned38 ROOT model nodes at unit scale/Z-up:6 major-family nodes,14 plate screws,14 bottom screws,2 Pico screws and2 inserts. `Removable bottom v1` UID `0f7143ce-0935-45e2-90a6-2daa24d942ad` references `keyboard-bottom-fit.build123d`; locations match the prior saved-scene validation. Previous38/38 enabled-render evidence remains the visibility evidence; this closeout did not rerun the renderer or exercise the live browser.

### Remaining physical acceptance gates and service safety
Caps and switches are mechanical envelopes, not printable functional mechanisms: stems, latches, pins, cap undersides and full-travel collision behavior require the actual selected parts. Qualify MX plate aperture/thickness with a coupon and selected switches; qualify PETG joint/pilot fits, purchased screws and insert bores with print/heat-set/torque coupons. Trial-fit the real original Pico including underside solder and tooling access, exact micro-USB plug/overmold and cable bend clearance before fabrication release. The plate remains a separately fabricated1.5 mm sheet, not FDM PETG.

**Required but not modeled/qualified:** an insulated, restrained service loop between the fixed hand-wired plate and Pico on the removable bottom, plus strain relief that prevents closure pinching and transfers cable/handling loads away from GPIO solder joints and the USB connector. Set its length and routing by the actual safe bottom-opening travel; no arbitrary length is qualified here. Unplug USB before opening, support the bottom instead of hanging it by wires, and verify the complete opening/closing cycle without tension, abrasion or contact with switch pins. The reserved wire slab proves space only, not this dynamic route.

### Preview and editing handoff
The exact source links in **Orbitable assemblies and geometry evidence** are saved supported inline-preview assets, not merely screenshots. Standard Markdown `[Descriptive title](https://cdn.flux.ai/...build123d)` renders the inline model card; use the full exact URLs above rather than the ellipsis. No special code fence or conversion URL is required for preview. Live browser loading, dragging/orbiting and all download-menu interactions remain NOT VERIFIED; previous source compilation, STEP inspection and static geometry rendering are separate completed checks.

Use the assembled source as the coordinated master, edit its dimension constants/functions, retain `result=assembly(False)` for installed output, and use `result=assembly(True)` for the exploded output. Export separate functions for updated parts and recompile/reinstall changed assets before fit checks. Independent copies do not synchronize. Source is editable parametric Python/build123d; STEP is neutral geometry, not source history; no in-browser feature editor is claimed.