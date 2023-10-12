#ifndef __RLIBM_PI_H__
#define __RLIBM_PI_H__

#include<stdint.h>

static const double sinpiMBy256TwoPi[512] = {
  0x0p+0,
  0x1.921d1fcdec784p-7,
  0x1.92155f7a3667ep-6,
  0x1.2d865759455cdp-5,
  0x1.91f65f10dd814p-5,
  0x1.f656e79f820ep-5,
  0x1.2d52092ce19f6p-4,
  0x1.5f6d00a9aa419p-4,
  0x1.917a6bc29b42cp-4,
  0x1.c3785c79ec2d5p-4,
  0x1.f564e56a9730ep-4,
  0x1.139f0cedaf577p-3,
  0x1.2c8106e8e613ap-3,
  0x1.45576b1293e5ap-3,
  0x1.5e214448b3fc6p-3,
  0x1.76dd9de50bf31p-3,
  0x1.8f8b83c69a60bp-3,
  0x1.a82a025b00451p-3,
  0x1.c0b826a7e4f63p-3,
  0x1.d934fe5454311p-3,
  0x1.f19f97b215f1bp-3,
  0x1.04fb80e37fdaep-2,
  0x1.111d262b1f677p-2,
  0x1.1d3443f4cdb3ep-2,
  0x1.294062ed59f06p-2,
  0x1.35410c2e18152p-2,
  0x1.4135c94176601p-2,
  0x1.4d1e24278e76ap-2,
  0x1.58f9a75ab1fddp-2,
  0x1.64c7ddd3f27c6p-2,
  0x1.7088530fa459fp-2,
  0x1.7c3a9311dcce7p-2,
  0x1.87de2a6aea963p-2,
  0x1.9372a63bc93d7p-2,
  0x1.9ef7943a8ed8ap-2,
  0x1.aa6c82b6d3fcap-2,
  0x1.b5d1009e15ccp-2,
  0x1.c1249d8011ee7p-2,
  0x1.cc66e9931c45ep-2,
  0x1.d79775b86e389p-2,
  0x1.e2b5d3806f63bp-2,
  0x1.edc1952ef78d6p-2,
  0x1.f8ba4dbf89abap-2,
  0x1.01cfc874c3eb7p-1,
  0x1.073879922ffeep-1,
  0x1.0c9704d5d898fp-1,
  0x1.11eb3541b4b23p-1,
  0x1.1734d63dedb49p-1,
  0x1.1c73b39ae68c8p-1,
  0x1.21a799933eb59p-1,
  0x1.26d054cdd12dfp-1,
  0x1.2bedb25faf3eap-1,
  0x1.30ff7fce17035p-1,
  0x1.36058b10659f3p-1,
  0x1.3affa292050b9p-1,
  0x1.3fed9534556d4p-1,
  0x1.44cf325091dd6p-1,
  0x1.49a449b9b0939p-1,
  0x1.4e6cabbe3e5e9p-1,
  0x1.5328292a35596p-1,
  0x1.57d69348cecap-1,
  0x1.5c77bbe65018cp-1,
  0x1.610b7551d2cdfp-1,
  0x1.6591925f0783dp-1,
  0x1.6a09e667f3bcdp-1,
  0x1.6e74454eaa8afp-1,
  0x1.72d0837efff96p-1,
  0x1.771e75f037261p-1,
  0x1.7b5df226aafafp-1,
  0x1.7f8ece3571771p-1,
  0x1.83b0e0bff976ep-1,
  0x1.87c400fba2ebfp-1,
  0x1.8bc806b151741p-1,
  0x1.8fbcca3ef940dp-1,
  0x1.93a22499263fbp-1,
  0x1.9777ef4c7d742p-1,
  0x1.9b3e047f38741p-1,
  0x1.9ef43ef29af94p-1,
  0x1.a29a7a0462782p-1,
  0x1.a63091b02fae2p-1,
  0x1.a9b66290ea1a3p-1,
  0x1.ad2bc9e21d511p-1,
  0x1.b090a581502p-1,
  0x1.b3e4d3ef55712p-1,
  0x1.b728345196e3ep-1,
  0x1.ba5aa673590d2p-1,
  0x1.bd7c0ac6f952ap-1,
  0x1.c08c426725549p-1,
  0x1.c38b2f180bdb1p-1,
  0x1.c678b3488739bp-1,
  0x1.c954b213411f5p-1,
  0x1.cc1f0f3fcfc5cp-1,
  0x1.ced7af43cc773p-1,
  0x1.d17e7743e35dcp-1,
  0x1.d4134d14dc93ap-1,
  0x1.d696173c9e68bp-1,
  0x1.d906bcf328d46p-1,
  0x1.db6526238a09bp-1,
  0x1.ddb13b6ccc23cp-1,
  0x1.dfeae622dbe2bp-1,
  0x1.e212104f686e5p-1,
  0x1.e426a4b2bc17ep-1,
  0x1.e6288ec48e112p-1,
  0x1.e817bab4cd10dp-1,
  0x1.e9f4156c62ddap-1,
  0x1.ebbd8c8df0b74p-1,
  0x1.ed740e7684963p-1,
  0x1.ef178a3e473c2p-1,
  0x1.f0a7efb9230d7p-1,
  0x1.f2252f7763adap-1,
  0x1.f38f3ac64e589p-1,
  0x1.f4e603b0b2f2dp-1,
  0x1.f6297cff75cbp-1,
  0x1.f7599a3a12077p-1,
  0x1.f8764fa714ba9p-1,
  0x1.f97f924c9099bp-1,
  0x1.fa7557f08a517p-1,
  0x1.fb5797195d741p-1,
  0x1.fc26470e19fd3p-1,
  0x1.fce15fd6da67bp-1,
  0x1.fd88da3d12526p-1,
  0x1.fe1cafcbd5b09p-1,
  0x1.fe9cdad01883ap-1,
  0x1.ff095658e71adp-1,
  0x1.ff621e3796d7ep-1,
  0x1.ffa72effef75dp-1,
  0x1.ffd886084cd0dp-1,
  0x1.fff62169b92dbp-1,
  0x1p+0,
  0x1.fff62169b92dbp-1,
  0x1.ffd886084cd0dp-1,
  0x1.ffa72effef75dp-1,
  0x1.ff621e3796d7ep-1,
  0x1.ff095658e71adp-1,
  0x1.fe9cdad01883ap-1,
  0x1.fe1cafcbd5b09p-1,
  0x1.fd88da3d12526p-1,
  0x1.fce15fd6da67bp-1,
  0x1.fc26470e19fd3p-1,
  0x1.fb5797195d741p-1,
  0x1.fa7557f08a517p-1,
  0x1.f97f924c9099bp-1,
  0x1.f8764fa714ba9p-1,
  0x1.f7599a3a12077p-1,
  0x1.f6297cff75cbp-1,
  0x1.f4e603b0b2f2dp-1,
  0x1.f38f3ac64e589p-1,
  0x1.f2252f7763adap-1,
  0x1.f0a7efb9230d7p-1,
  0x1.ef178a3e473c2p-1,
  0x1.ed740e7684963p-1,
  0x1.ebbd8c8df0b74p-1,
  0x1.e9f4156c62ddap-1,
  0x1.e817bab4cd10dp-1,
  0x1.e6288ec48e112p-1,
  0x1.e426a4b2bc17ep-1,
  0x1.e212104f686e5p-1,
  0x1.dfeae622dbe2bp-1,
  0x1.ddb13b6ccc23cp-1,
  0x1.db6526238a09bp-1,
  0x1.d906bcf328d46p-1,
  0x1.d696173c9e68bp-1,
  0x1.d4134d14dc93ap-1,
  0x1.d17e7743e35dcp-1,
  0x1.ced7af43cc773p-1,
  0x1.cc1f0f3fcfc5cp-1,
  0x1.c954b213411f5p-1,
  0x1.c678b3488739bp-1,
  0x1.c38b2f180bdb1p-1,
  0x1.c08c426725549p-1,
  0x1.bd7c0ac6f952ap-1,
  0x1.ba5aa673590d2p-1,
  0x1.b728345196e3ep-1,
  0x1.b3e4d3ef55712p-1,
  0x1.b090a581502p-1,
  0x1.ad2bc9e21d511p-1,
  0x1.a9b66290ea1a3p-1,
  0x1.a63091b02fae2p-1,
  0x1.a29a7a0462782p-1,
  0x1.9ef43ef29af94p-1,
  0x1.9b3e047f38741p-1,
  0x1.9777ef4c7d742p-1,
  0x1.93a22499263fbp-1,
  0x1.8fbcca3ef940dp-1,
  0x1.8bc806b151741p-1,
  0x1.87c400fba2ebfp-1,
  0x1.83b0e0bff976ep-1,
  0x1.7f8ece3571771p-1,
  0x1.7b5df226aafafp-1,
  0x1.771e75f037261p-1,
  0x1.72d0837efff96p-1,
  0x1.6e74454eaa8afp-1,
  0x1.6a09e667f3bcdp-1,
  0x1.6591925f0783dp-1,
  0x1.610b7551d2cdfp-1,
  0x1.5c77bbe65018cp-1,
  0x1.57d69348cecap-1,
  0x1.5328292a35596p-1,
  0x1.4e6cabbe3e5e9p-1,
  0x1.49a449b9b0939p-1,
  0x1.44cf325091dd6p-1,
  0x1.3fed9534556d4p-1,
  0x1.3affa292050b9p-1,
  0x1.36058b10659f3p-1,
  0x1.30ff7fce17035p-1,
  0x1.2bedb25faf3eap-1,
  0x1.26d054cdd12dfp-1,
  0x1.21a799933eb59p-1,
  0x1.1c73b39ae68c8p-1,
  0x1.1734d63dedb49p-1,
  0x1.11eb3541b4b23p-1,
  0x1.0c9704d5d898fp-1,
  0x1.073879922ffeep-1,
  0x1.01cfc874c3eb7p-1,
  0x1.f8ba4dbf89abap-2,
  0x1.edc1952ef78d6p-2,
  0x1.e2b5d3806f63bp-2,
  0x1.d79775b86e389p-2,
  0x1.cc66e9931c45ep-2,
  0x1.c1249d8011ee7p-2,
  0x1.b5d1009e15ccp-2,
  0x1.aa6c82b6d3fcap-2,
  0x1.9ef7943a8ed8ap-2,
  0x1.9372a63bc93d7p-2,
  0x1.87de2a6aea963p-2,
  0x1.7c3a9311dcce7p-2,
  0x1.7088530fa459fp-2,
  0x1.64c7ddd3f27c6p-2,
  0x1.58f9a75ab1fddp-2,
  0x1.4d1e24278e76ap-2,
  0x1.4135c94176601p-2,
  0x1.35410c2e18152p-2,
  0x1.294062ed59f06p-2,
  0x1.1d3443f4cdb3ep-2,
  0x1.111d262b1f677p-2,
  0x1.04fb80e37fdaep-2,
  0x1.f19f97b215f1bp-3,
  0x1.d934fe5454311p-3,
  0x1.c0b826a7e4f63p-3,
  0x1.a82a025b00451p-3,
  0x1.8f8b83c69a60bp-3,
  0x1.76dd9de50bf31p-3,
  0x1.5e214448b3fc6p-3,
  0x1.45576b1293e5ap-3,
  0x1.2c8106e8e613ap-3,
  0x1.139f0cedaf577p-3,
  0x1.f564e56a9730ep-4,
  0x1.c3785c79ec2d5p-4,
  0x1.917a6bc29b42cp-4,
  0x1.5f6d00a9aa419p-4,
  0x1.2d52092ce19f6p-4,
  0x1.f656e79f820ep-5,
  0x1.91f65f10dd814p-5,
  0x1.2d865759455cdp-5,
  0x1.92155f7a3667ep-6,
  0x1.921d1fcdec784p-7,
  0x0p+0,
  -0x1.921d1fcdec784p-7,
  -0x1.92155f7a3667ep-6,
  -0x1.2d865759455cdp-5,
  -0x1.91f65f10dd814p-5,
  -0x1.f656e79f820ep-5,
  -0x1.2d52092ce19f6p-4,
  -0x1.5f6d00a9aa419p-4,
  -0x1.917a6bc29b42cp-4,
  -0x1.c3785c79ec2d5p-4,
  -0x1.f564e56a9730ep-4,
  -0x1.139f0cedaf577p-3,
  -0x1.2c8106e8e613ap-3,
  -0x1.45576b1293e5ap-3,
  -0x1.5e214448b3fc6p-3,
  -0x1.76dd9de50bf31p-3,
  -0x1.8f8b83c69a60bp-3,
  -0x1.a82a025b00451p-3,
  -0x1.c0b826a7e4f63p-3,
  -0x1.d934fe5454311p-3,
  -0x1.f19f97b215f1bp-3,
  -0x1.04fb80e37fdaep-2,
  -0x1.111d262b1f677p-2,
  -0x1.1d3443f4cdb3ep-2,
  -0x1.294062ed59f06p-2,
  -0x1.35410c2e18152p-2,
  -0x1.4135c94176601p-2,
  -0x1.4d1e24278e76ap-2,
  -0x1.58f9a75ab1fddp-2,
  -0x1.64c7ddd3f27c6p-2,
  -0x1.7088530fa459fp-2,
  -0x1.7c3a9311dcce7p-2,
  -0x1.87de2a6aea963p-2,
  -0x1.9372a63bc93d7p-2,
  -0x1.9ef7943a8ed8ap-2,
  -0x1.aa6c82b6d3fcap-2,
  -0x1.b5d1009e15ccp-2,
  -0x1.c1249d8011ee7p-2,
  -0x1.cc66e9931c45ep-2,
  -0x1.d79775b86e389p-2,
  -0x1.e2b5d3806f63bp-2,
  -0x1.edc1952ef78d6p-2,
  -0x1.f8ba4dbf89abap-2,
  -0x1.01cfc874c3eb7p-1,
  -0x1.073879922ffeep-1,
  -0x1.0c9704d5d898fp-1,
  -0x1.11eb3541b4b23p-1,
  -0x1.1734d63dedb49p-1,
  -0x1.1c73b39ae68c8p-1,
  -0x1.21a799933eb59p-1,
  -0x1.26d054cdd12dfp-1,
  -0x1.2bedb25faf3eap-1,
  -0x1.30ff7fce17035p-1,
  -0x1.36058b10659f3p-1,
  -0x1.3affa292050b9p-1,
  -0x1.3fed9534556d4p-1,
  -0x1.44cf325091dd6p-1,
  -0x1.49a449b9b0939p-1,
  -0x1.4e6cabbe3e5e9p-1,
  -0x1.5328292a35596p-1,
  -0x1.57d69348cecap-1,
  -0x1.5c77bbe65018cp-1,
  -0x1.610b7551d2cdfp-1,
  -0x1.6591925f0783dp-1,
  -0x1.6a09e667f3bcdp-1,
  -0x1.6e74454eaa8afp-1,
  -0x1.72d0837efff96p-1,
  -0x1.771e75f037261p-1,
  -0x1.7b5df226aafafp-1,
  -0x1.7f8ece3571771p-1,
  -0x1.83b0e0bff976ep-1,
  -0x1.87c400fba2ebfp-1,
  -0x1.8bc806b151741p-1,
  -0x1.8fbcca3ef940dp-1,
  -0x1.93a22499263fbp-1,
  -0x1.9777ef4c7d742p-1,
  -0x1.9b3e047f38741p-1,
  -0x1.9ef43ef29af94p-1,
  -0x1.a29a7a0462782p-1,
  -0x1.a63091b02fae2p-1,
  -0x1.a9b66290ea1a3p-1,
  -0x1.ad2bc9e21d511p-1,
  -0x1.b090a581502p-1,
  -0x1.b3e4d3ef55712p-1,
  -0x1.b728345196e3ep-1,
  -0x1.ba5aa673590d2p-1,
  -0x1.bd7c0ac6f952ap-1,
  -0x1.c08c426725549p-1,
  -0x1.c38b2f180bdb1p-1,
  -0x1.c678b3488739bp-1,
  -0x1.c954b213411f5p-1,
  -0x1.cc1f0f3fcfc5cp-1,
  -0x1.ced7af43cc773p-1,
  -0x1.d17e7743e35dcp-1,
  -0x1.d4134d14dc93ap-1,
  -0x1.d696173c9e68bp-1,
  -0x1.d906bcf328d46p-1,
  -0x1.db6526238a09bp-1,
  -0x1.ddb13b6ccc23cp-1,
  -0x1.dfeae622dbe2bp-1,
  -0x1.e212104f686e5p-1,
  -0x1.e426a4b2bc17ep-1,
  -0x1.e6288ec48e112p-1,
  -0x1.e817bab4cd10dp-1,
  -0x1.e9f4156c62ddap-1,
  -0x1.ebbd8c8df0b74p-1,
  -0x1.ed740e7684963p-1,
  -0x1.ef178a3e473c2p-1,
  -0x1.f0a7efb9230d7p-1,
  -0x1.f2252f7763adap-1,
  -0x1.f38f3ac64e589p-1,
  -0x1.f4e603b0b2f2dp-1,
  -0x1.f6297cff75cbp-1,
  -0x1.f7599a3a12077p-1,
  -0x1.f8764fa714ba9p-1,
  -0x1.f97f924c9099bp-1,
  -0x1.fa7557f08a517p-1,
  -0x1.fb5797195d741p-1,
  -0x1.fc26470e19fd3p-1,
  -0x1.fce15fd6da67bp-1,
  -0x1.fd88da3d12526p-1,
  -0x1.fe1cafcbd5b09p-1,
  -0x1.fe9cdad01883ap-1,
  -0x1.ff095658e71adp-1,
  -0x1.ff621e3796d7ep-1,
  -0x1.ffa72effef75dp-1,
  -0x1.ffd886084cd0dp-1,
  -0x1.fff62169b92dbp-1,
  -0x1p+0,
  -0x1.fff62169b92dbp-1,
  -0x1.ffd886084cd0dp-1,
  -0x1.ffa72effef75dp-1,
  -0x1.ff621e3796d7ep-1,
  -0x1.ff095658e71adp-1,
  -0x1.fe9cdad01883ap-1,
  -0x1.fe1cafcbd5b09p-1,
  -0x1.fd88da3d12526p-1,
  -0x1.fce15fd6da67bp-1,
  -0x1.fc26470e19fd3p-1,
  -0x1.fb5797195d741p-1,
  -0x1.fa7557f08a517p-1,
  -0x1.f97f924c9099bp-1,
  -0x1.f8764fa714ba9p-1,
  -0x1.f7599a3a12077p-1,
  -0x1.f6297cff75cbp-1,
  -0x1.f4e603b0b2f2dp-1,
  -0x1.f38f3ac64e589p-1,
  -0x1.f2252f7763adap-1,
  -0x1.f0a7efb9230d7p-1,
  -0x1.ef178a3e473c2p-1,
  -0x1.ed740e7684963p-1,
  -0x1.ebbd8c8df0b74p-1,
  -0x1.e9f4156c62ddap-1,
  -0x1.e817bab4cd10dp-1,
  -0x1.e6288ec48e112p-1,
  -0x1.e426a4b2bc17ep-1,
  -0x1.e212104f686e5p-1,
  -0x1.dfeae622dbe2bp-1,
  -0x1.ddb13b6ccc23cp-1,
  -0x1.db6526238a09bp-1,
  -0x1.d906bcf328d46p-1,
  -0x1.d696173c9e68bp-1,
  -0x1.d4134d14dc93ap-1,
  -0x1.d17e7743e35dcp-1,
  -0x1.ced7af43cc773p-1,
  -0x1.cc1f0f3fcfc5cp-1,
  -0x1.c954b213411f5p-1,
  -0x1.c678b3488739bp-1,
  -0x1.c38b2f180bdb1p-1,
  -0x1.c08c426725549p-1,
  -0x1.bd7c0ac6f952ap-1,
  -0x1.ba5aa673590d2p-1,
  -0x1.b728345196e3ep-1,
  -0x1.b3e4d3ef55712p-1,
  -0x1.b090a581502p-1,
  -0x1.ad2bc9e21d511p-1,
  -0x1.a9b66290ea1a3p-1,
  -0x1.a63091b02fae2p-1,
  -0x1.a29a7a0462782p-1,
  -0x1.9ef43ef29af94p-1,
  -0x1.9b3e047f38741p-1,
  -0x1.9777ef4c7d742p-1,
  -0x1.93a22499263fbp-1,
  -0x1.8fbcca3ef940dp-1,
  -0x1.8bc806b151741p-1,
  -0x1.87c400fba2ebfp-1,
  -0x1.83b0e0bff976ep-1,
  -0x1.7f8ece3571771p-1,
  -0x1.7b5df226aafafp-1,
  -0x1.771e75f037261p-1,
  -0x1.72d0837efff96p-1,
  -0x1.6e74454eaa8afp-1,
  -0x1.6a09e667f3bcdp-1,
  -0x1.6591925f0783dp-1,
  -0x1.610b7551d2cdfp-1,
  -0x1.5c77bbe65018cp-1,
  -0x1.57d69348cecap-1,
  -0x1.5328292a35596p-1,
  -0x1.4e6cabbe3e5e9p-1,
  -0x1.49a449b9b0939p-1,
  -0x1.44cf325091dd6p-1,
  -0x1.3fed9534556d4p-1,
  -0x1.3affa292050b9p-1,
  -0x1.36058b10659f3p-1,
  -0x1.30ff7fce17035p-1,
  -0x1.2bedb25faf3eap-1,
  -0x1.26d054cdd12dfp-1,
  -0x1.21a799933eb59p-1,
  -0x1.1c73b39ae68c8p-1,
  -0x1.1734d63dedb49p-1,
  -0x1.11eb3541b4b23p-1,
  -0x1.0c9704d5d898fp-1,
  -0x1.073879922ffeep-1,
  -0x1.01cfc874c3eb7p-1,
  -0x1.f8ba4dbf89abap-2,
  -0x1.edc1952ef78d6p-2,
  -0x1.e2b5d3806f63bp-2,
  -0x1.d79775b86e389p-2,
  -0x1.cc66e9931c45ep-2,
  -0x1.c1249d8011ee7p-2,
  -0x1.b5d1009e15ccp-2,
  -0x1.aa6c82b6d3fcap-2,
  -0x1.9ef7943a8ed8ap-2,
  -0x1.9372a63bc93d7p-2,
  -0x1.87de2a6aea963p-2,
  -0x1.7c3a9311dcce7p-2,
  -0x1.7088530fa459fp-2,
  -0x1.64c7ddd3f27c6p-2,
  -0x1.58f9a75ab1fddp-2,
  -0x1.4d1e24278e76ap-2,
  -0x1.4135c94176601p-2,
  -0x1.35410c2e18152p-2,
  -0x1.294062ed59f06p-2,
  -0x1.1d3443f4cdb3ep-2,
  -0x1.111d262b1f677p-2,
  -0x1.04fb80e37fdaep-2,
  -0x1.f19f97b215f1bp-3,
  -0x1.d934fe5454311p-3,
  -0x1.c0b826a7e4f63p-3,
  -0x1.a82a025b00451p-3,
  -0x1.8f8b83c69a60bp-3,
  -0x1.76dd9de50bf31p-3,
  -0x1.5e214448b3fc6p-3,
  -0x1.45576b1293e5ap-3,
  -0x1.2c8106e8e613ap-3,
  -0x1.139f0cedaf577p-3,
  -0x1.f564e56a9730ep-4,
  -0x1.c3785c79ec2d5p-4,
  -0x1.917a6bc29b42cp-4,
  -0x1.5f6d00a9aa419p-4,
  -0x1.2d52092ce19f6p-4,
  -0x1.f656e79f820ep-5,
  -0x1.91f65f10dd814p-5,
  -0x1.2d865759455cdp-5,
  -0x1.92155f7a3667ep-6,
  -0x1.921d1fcdec784p-7
};



static const double atan_vals[256] = {
 0x1.ffffd5555bbbcp-10,
 0x1.7ffee00184ca6p-8,
 0x1.3ffd655f1929cp-7,
 0x1.bff8dadf2e78cp-7,
 0x1.1ff8685c3e636p-6,
 0x1.5ff223a639d5cp-6,
 0x1.9fe91f99362d6p-6,
 0x1.dfdcdca1cbe7p-6,
 0x1.0fe66da9b94eep-5,
 0x1.2fdc4e3737dddp-5,
 0x1.4fcfd072dff79p-5,
 0x1.6fc0b4f27d5bbp-5,
 0x1.8faebc6b17abap-5,
 0x1.af99a7b3dd42fp-5,
 0x1.cf8137c90a177p-5,
 0x1.ef652dceca4dcp-5,
 0x1.07a2a58a0c16fp-4,
 0x1.1790a88aca931p-4,
 0x1.277c80c02ec4dp-4,
 0x1.37660f1a6b5d8p-4,
 0x1.474d34a4bbb9dp-4,
 0x1.5731d286c4ecbp-4,
 0x1.6713ca05f38b3p-4,
 0x1.76f2fc86d613dp-4,
 0x1.86cf4b8e73cbfp-4,
 0x1.96a898c39fefbp-4,
 0x1.a67ec5f04910ap-4,
 0x1.b651b502c480ap-4,
 0x1.c621480f15a6ap-4,
 0x1.d5ed6150311dcp-4,
 0x1.e5b5e3293b7cfp-4,
 0x1.f57ab026c3a9p-4,
 0x1.029dd57ffc493p-3,
 0x1.0a7c5b4bed20fp-3,
 0x1.1258daff330b4p-3,
 0x1.1a334638df0d3p-3,
 0x1.220b8eafa5aa3p-3,
 0x1.29e1a6326d7d6p-3,
 0x1.31b57ea8db38dp-3,
 0x1.39870a13dafd5p-3,
 0x1.41563a8e2700dp-3,
 0x1.4923024ccb781p-3,
 0x1.50ed539fa7b92p-3,
 0x1.58b520f1ec8e1p-3,
 0x1.607a5cca97ad8p-3,
 0x1.683cf9ccec514p-3,
 0x1.6ffceab8e8e2cp-3,
 0x1.77ba226bb9b5ap-3,
 0x1.7f7493e028c98p-3,
 0x1.872c322f0a8ccp-3,
 0x1.8ee0f08fa79a2p-3,
 0x1.9692c258236b8p-3,
 0x1.9e419afddffe1p-3,
 0x1.a5ed6e15de61fp-3,
 0x1.ad962f551c32fp-3,
 0x1.b53bd290edf69p-3,
 0x1.bcde4bbf565c2p-3,
 0x1.c47d8ef75a5dcp-3,
 0x1.cc199071523f5p-3,
 0x1.d3b24487376b7p-3,
 0x1.db479fb4ef2c9p-3,
 0x1.e2d996989242ep-3,
 0x1.ea681df2b156bp-3,
 0x1.f1f32aa696486p-3,
 0x1.f97ab1ba825f5p-3,
 0x1.007f542bf4ac6p-2,
 0x1.043f81e5d4acep-2,
 0x1.07fddcc31fe2ep-2,
 0x1.0bba5f8dfd7efp-2,
 0x1.0f7505229485fp-2,
 0x1.132dc86f219e3p-2,
 0x1.16e4a4740b56cp-2,
 0x1.1a999443f4eafp-2,
 0x1.1e4c9303cf84dp-2,
 0x1.21fd9beaea015p-2,
 0x1.25acaa42ff38fp-2,
 0x1.2959b96842d04p-2,
 0x1.2d04c4c96c935p-2,
 0x1.30adc7e7c25f9p-2,
 0x1.3454be5720ap-2,
 0x1.37f9a3be015f3p-2,
 0x1.3b9c73d581f2ep-2,
 0x1.3f3d2a6967464p-2,
 0x1.42dbc35820c56p-2,
 0x1.46783a92c9f05p-2,
 0x1.4a128c1d2a987p-2,
 0x1.4daab40db5cep-2,
 0x1.5140ae8d8781bp-2,
 0x1.54d477d860e03p-2,
 0x1.58660c3ca36b2p-2,
 0x1.5bf5681b4ad65p-2,
 0x1.5f8287e7e5acdp-2,
 0x1.630d68288cc4p-2,
 0x1.66960575d9823p-2,
 0x1.6a1c5c7adafcep-2,
 0x1.6da069f509f63p-2,
 0x1.71222ab43bbcep-2,
 0x1.74a19b9a93f63p-2,
 0x1.781eb99c7556ap-2,
 0x1.7b9981c0714fp-2,
 0x1.7f11f11f36b43p-2,
 0x1.828804e37f674p-2,
 0x1.85fbba49fd035p-2,
 0x1.896d0ea144979p-2,
 0x1.8cdbff49b9739p-2,
 0x1.904889b5770aap-2,
 0x1.93b2ab6839f5cp-2,
 0x1.971a61f74818bp-2,
 0x1.9a7fab0957f14p-2,
 0x1.9de284567716p-2,
 0x1.a142eba7efea6p-2,
 0x1.a4a0ded82e8f4p-2,
 0x1.a7fc5bd2a514p-2,
 0x1.ab556093aeeffp-2,
 0x1.aeabeb2873c8cp-2,
 0x1.b1fff9aec98c4p-2,
 0x1.b5518a5515e3ap-2,
 0x1.b8a09b5a2f055p-2,
 0x1.bbed2b0d3bec1p-2,
 0x1.bf3737cd93f87p-2,
 0x1.c27ec00a9e02ap-2,
 0x1.c5c3c243aee29p-2,
 0x1.c9063d07e7736p-2,
 0x1.cc462ef612186p-2,
 0x1.cf8396bc7fc8ep-2,
 0x1.d2be7318e4a81p-2,
 0x1.d5f6c2d8342f1p-2,
 0x1.d92c84d67cedap-2,
 0x1.dc5fb7fec3e8p-2,
 0x1.df905b4adf958p-2,
 0x1.e2be6dc352873p-2,
 0x1.e5e9ee7f25b96p-2,
 0x1.e912dca3c2973p-2,
 0x1.ec393764ccb3cp-2,
 0x1.ef5cfe03fb3e2p-2,
 0x1.f27e2fd0f235bp-2,
 0x1.f59ccc291b62ap-2,
 0x1.f8b8d2777f17cp-2,
 0x1.fbd242349cc26p-2,
 0x1.fee91ae6434c8p-2,
 0x1.00feae0fb4aafp-1,
 0x1.028782c002a43p-1,
 0x1.040f0b5a72a5ep-1,
 0x1.059547bbc38eap-1,
 0x1.071a37c6f7e7bp-1,
 0x1.089ddb6541ba5p-1,
 0x1.0a203285ee5dep-1,
 0x1.0ba13d1e523fp-1,
 0x1.0d20fb29b4a33p-1,
 0x1.0e9f6ca93b696p-1,
 0x1.101c91a3d6cadp-1,
 0x1.11986a262d1c6p-1,
 0x1.1312f64286933p-1,
 0x1.148c3610b90dfp-1,
 0x1.160429ae13e44p-1,
 0x1.177ad13d4bbe4p-1,
 0x1.18f02ce666752p-1,
 0x1.1a643cd6a6ff5p-1,
 0x1.1bd7014079684p-1,
 0x1.1d487a5b5ed71p-1,
 0x1.1eb8a863d9a38p-1,
 0x1.20278b9b597c5p-1,
 0x1.21952448279f2p-1,
 0x1.230172b553239p-1,
 0x1.246c77329d5b5p-1,
 0x1.25d632146646fp-1,
 0x1.273ea3b399229p-1,
 0x1.28a5cc6d99099p-1,
 0x1.2a0baca42db4p-1,
 0x1.2b7044bd704d9p-1,
 0x1.2cd39523b867fp-1,
 0x1.2e359e458909p-1,
 0x1.2f9660957dd6p-1,
 0x1.30f5dc8a385cfp-1,
 0x1.3254129e4d7bep-1,
 0x1.33b1035032e8bp-1,
 0x1.350caf222cd8ap-1,
 0x1.3667169a3bc9p-1,
 0x1.37c03a420a69ep-1,
 0x1.39181aa6dbab3p-1,
 0x1.3a6eb85978edp-1,
 0x1.3bc413ee20537p-1,
 0x1.3d182dfc733f7p-1,
 0x1.3e6b071f64ebcp-1,
 0x1.3fbc9ff529305p-1,
 0x1.410cf91f236acp-1,
 0x1.425c1341d58e1p-1,
 0x1.43a9ef04cf58dp-1,
 0x1.44f68d129db2ap-1,
 0x1.4641ee18ba32p-1,
 0x1.478c12c77ac96p-1,
 0x1.48d4fbd2019d6p-1,
 0x1.4a1ca9ee2d036p-1,
 0x1.4b631dd487a98p-1,
 0x1.4ca8584038e77p-1,
 0x1.4dec59eef5396p-1,
 0x1.4f2f23a0eee48p-1,
 0x1.5070b618c6c51p-1,
 0x1.51b1121b7d47bp-1,
 0x1.52f03870638b9p-1,
 0x1.542e29e10cb08p-1,
 0x1.556ae7393f4e6p-1,
 0x1.56a67146e7184p-1,
 0x1.57e0c8da06a94p-1,
 0x1.5919eec4a97d2p-1,
 0x1.5a51e3dad612fp-1,
 0x1.5b88a8f2803bp-1,
 0x1.5cbe3ee37b8fbp-1,
 0x1.5df2a6876e18ap-1,
 0x1.5f25e0b9c3197p-1,
 0x1.6057ee579e0a6p-1,
 0x1.6188d03fcdbc7p-1,
 0x1.62b88752bfa7ap-1,
 0x1.63e714727363ep-1,
 0x1.651478826e4c8p-1,
 0x1.6640b467af4dep-1,
 0x1.676bc908a2dd2p-1,
 0x1.6895b74d171a5p-1,
 0x1.69be801e301c2p-1,
 0x1.6ae624665c656p-1,
 0x1.6c0ca51149842p-1,
 0x1.6d32030bd8da2p-1,
 0x1.6e563f44148e8p-1,
 0x1.6f795aa924a84p-1,
 0x1.709b562b44518p-1,
 0x1.71bc32bbb743ap-1,
 0x1.72dbf14cbf5b2p-1,
 0x1.73fa92d19253fp-1,
 0x1.7518183e4fad6p-1,
 0x1.76348287f6b5ap-1,
 0x1.774fd2a45cbcap-1,
 0x1.786a098a236dfp-1,
 0x1.79832830af511p-1,
 0x1.7a9b2f901e709p-1,
 0x1.7bb220a13f275p-1,
 0x1.7cc7fc5d87134p-1,
 0x1.7ddcc3bf0a2e3p-1,
 0x1.7ef077c0720b7p-1,
 0x1.8003195cf53acp-1,
 0x1.8114a9904ecfap-1,
 0x1.82252956b60d1p-1,
 0x1.833499acd6355p-1,
 0x1.8442fb8fc67d3p-1,
 0x1.85504ffd0222dp-1,
 0x1.865c97f260a79p-1,
 0x1.8767d46e0e2c1p-1,
 0x1.8872066e83ef7p-1,
 0x1.897b2ef280efcp-1,
 0x1.8a834ef902ac6p-1,
 0x1.8b8a67813e0ap-1,
 0x1.8c90798a98574p-1,
 0x1.8d958614a071bp-1,
 0x1.8e998e1f080cp-1,
 0x1.8f9c92a99d131p-1,
 0x1.909e94b443333p-1,
 0x1.919f953eed7c9p-1
};

static const double atan_vals_256[257] = {
  0x0p+0,
  0x1.ffff5555bbbb7p-9,
  0x1.fffd555bbba97p-8,
  0x1.7ffb80184c30ap-7,
  0x1.fff555bbb729bp-7,
  0x1.3ff595f18a7p-6,
  0x1.7fee0184a5c36p-6,
  0x1.bfe36df291712p-6,
  0x1.ffd55bba97625p-6,
  0x1.1fe1a5c2ec497p-5,
  0x1.3fd65f169c9d9p-5,
  0x1.5fc89a5fa3b2dp-5,
  0x1.7fb818430da2ap-5,
  0x1.9fa49986984dfp-5,
  0x1.bf8ddf139c444p-5,
  0x1.df73a9f9f1882p-5,
  0x1.ff55bb72cfdeap-5,
  0x1.0f99ea71d52a7p-4,
  0x1.1f86dbf082d59p-4,
  0x1.2f719318a4a9ap-4,
  0x1.3f59f0e7c559dp-4,
  0x1.4f3fd677292fbp-4,
  0x1.5f2324fd2d7b2p-4,
  0x1.6f03bdcea4b0dp-4,
  0x1.7ee182602f10fp-4,
  0x1.8ebc54478fb28p-4,
  0x1.9e94153cfdcf1p-4,
  0x1.ae68a71c722b8p-4,
  0x1.be39ebe6f07c3p-4,
  0x1.ce07c5c3cca32p-4,
  0x1.ddd21701eba6ep-4,
  0x1.ed98c2190043bp-4,
  0x1.fd5ba9aac2f6ep-4,
  0x1.068d584212b3ep-3,
  0x1.0e6adccf40882p-3,
  0x1.164654106085p-3,
  0x1.1e1fafb043727p-3,
  0x1.25f6e171a535cp-3,
  0x1.2dcbdb2fba1ffp-3,
  0x1.359e8edeb99a4p-3,
  0x1.3d6eee8c6626cp-3,
  0x1.453cec6092a9ep-3,
  0x1.4d087a9da4f17p-3,
  0x1.54d18ba11570ap-3,
  0x1.5c9811e3ec26ap-3,
  0x1.645bfffb3aa74p-3,
  0x1.6c1d4898933d9p-3,
  0x1.73dbde8a7d202p-3,
  0x1.7b97b4bce5b02p-3,
  0x1.8350be398ebc8p-3,
  0x1.8b06ee2879c29p-3,
  0x1.92ba37d050272p-3,
  0x1.9a6a8e96c8626p-3,
  0x1.a217e601081a6p-3,
  0x1.a9c231b403279p-3,
  0x1.b1696574d780cp-3,
  0x1.b90d7529260a2p-3,
  0x1.c0ae54d768467p-3,
  0x1.c84bf8a742e6ep-3,
  0x1.cfe654e1d5395p-3,
  0x1.d77d5df205736p-3,
  0x1.df110864c9d9ep-3,
  0x1.e6a148e96ec4dp-3,
  0x1.ee2e1451d980dp-3,
  0x1.f5b75f92c80ddp-3,
  0x1.fd3d1fc40dbe4p-3,
  0x1.025fa510665b6p-2,
  0x1.061eea03d6291p-2,
  0x1.09dc597d86362p-2,
  0x1.0d97ee509acb3p-2,
  0x1.1151a362431cap-2,
  0x1.150973a9ce547p-2,
  0x1.18bf5a30bf178p-2,
  0x1.1c735212dd884p-2,
  0x1.2025567e47c96p-2,
  0x1.23d562b381042p-2,
  0x1.278372057ef46p-2,
  0x1.2b2f7fd9b5fe2p-2,
  0x1.2ed987a823cfep-2,
  0x1.328184fb58952p-2,
  0x1.362773707ebccp-2,
  0x1.39cb4eb76157cp-2,
  0x1.3d6d129271134p-2,
  0x1.410cbad6c7d33p-2,
  0x1.44aa436c2af0ap-2,
  0x1.4845a84d0c21bp-2,
  0x1.4bdee586890e7p-2,
  0x1.4f75f73869979p-2,
  0x1.530ad9951cd4ap-2,
  0x1.569d88e1b4cd8p-2,
  0x1.5a2e0175e0f4ep-2,
  0x1.5dbc3fbbe768dp-2,
  0x1.614840309cfe2p-2,
  0x1.64d1ff635c1c6p-2,
  0x1.685979f5fa6fep-2,
  0x1.6bdeac9cbd76dp-2,
  0x1.6f61941e4def1p-2,
  0x1.72e22d53aa2aap-2,
  0x1.7660752817502p-2,
  0x1.79dc6899118d1p-2,
  0x1.7d5604b63b3f7p-2,
  0x1.80cd46a14b1d1p-2,
  0x1.84422b8df95d7p-2,
  0x1.87b4b0c1ebedcp-2,
  0x1.8b24d394a1b25p-2,
  0x1.8e92916f5cde8p-2,
  0x1.91fde7cd0c662p-2,
  0x1.9566d43a34907p-2,
  0x1.98cd5454d6b18p-2,
  0x1.9c3165cc58107p-2,
  0x1.9f93066168002p-2,
  0x1.a2f233e5e530bp-2,
  0x1.a64eec3cc23fdp-2,
  0x1.a9a92d59e98cfp-2,
  0x1.ad00f5422058bp-2,
  0x1.b056420ae9344p-2,
  0x1.b3a911da65c6cp-2,
  0x1.b6f962e737efcp-2,
  0x1.ba473378624a5p-2,
  0x1.bd9281e528192p-2,
  0x1.c0db4c94ec9fp-2,
  0x1.c42191ff11eb7p-2,
  0x1.c76550aad71f9p-2,
  0x1.caa6872f3631bp-2,
  0x1.cde53432c1351p-2,
  0x1.d121566b7f2adp-2,
  0x1.d45aec9ec862bp-2,
  0x1.d791f5a1226f5p-2,
  0x1.dac670561bb4fp-2,
  0x1.ddf85bb026974p-2,
  0x1.e127b6b0744bp-2,
  0x1.e4548066cf51ap-2,
  0x1.e77eb7f175a34p-2,
  0x1.eaa65c7cf28c4p-2,
  0x1.edcb6d43f8435p-2,
  0x1.f0ede98f393dp-2,
  0x1.f40dd0b541418p-2,
  0x1.f72b221a4e495p-2,
  0x1.fa45dd3029259p-2,
  0x1.fd5e0175fdf83p-2,
  0x1.0039c73c1a40cp-1,
  0x1.01c341e82422dp-1,
  0x1.034b709250488p-1,
  0x1.04d25314342e6p-1,
  0x1.0657e94db30dp-1,
  0x1.07dc3324e9b38p-1,
  0x1.095f30861a59p-1,
  0x1.0ae0e1639866cp-1,
  0x1.0c6145b5b43dap-1,
  0x1.0de05d7aa6f7dp-1,
  0x1.0f5e28b67e295p-1,
  0x1.10daa77307a0dp-1,
  0x1.1255d9bfbd2a9p-1,
  0x1.13cfbfb1b056ep-1,
  0x1.154859637646ap-1,
  0x1.16bfa6f5137e1p-1,
  0x1.1835a88be7c13p-1,
  0x1.19aa5e5299f9ap-1,
  0x1.1b1dc87904285p-1,
  0x1.1c8fe7341f64fp-1,
  0x1.1e00babdefeb4p-1,
  0x1.1f7043557138ap-1,
  0x1.20de813e823b2p-1,
  0x1.224b74c1d192ap-1,
  0x1.23b71e2cc9e6ap-1,
  0x1.25217dd17e501p-1,
  0x1.268a940696da6p-1,
  0x1.27f261273d1b3p-1,
  0x1.2958e59308e31p-1,
  0x1.2abe21aded073p-1,
  0x1.2c2215e024466p-1,
  0x1.2d84c2961e48cp-1,
  0x1.2ee628406cbcap-1,
  0x1.30464753b090bp-1,
  0x1.31a52048874bep-1,
  0x1.3302b39b78856p-1,
  0x1.345f01cce37bbp-1,
  0x1.35ba0b60ecccep-1,
  0x1.3713d0df6c504p-1,
  0x1.386c52d3db11fp-1,
  0x1.39c391cd4171ap-1,
  0x1.3b198e5e2564bp-1,
  0x1.3c6e491c78dc5p-1,
  0x1.3dc1c2a188504p-1,
  0x1.3f13fb89e96f4p-1,
  0x1.4064f47569f49p-1,
  0x1.41b4ae06fea41p-1,
  0x1.430328e4b26d6p-1,
  0x1.445065b795b56p-1,
  0x1.459c652badc7fp-1,
  0x1.46e727efe4716p-1,
  0x1.4830aeb5f7bfep-1,
  0x1.4978fa3269ee1p-1,
  0x1.4ac00b1c71762p-1,
  0x1.4c05e22de94e5p-1,
  0x1.4d4a8023414e8p-1,
  0x1.4e8de5bb6ec04p-1,
  0x1.4fd013b7dd17ep-1,
  0x1.51110adc5ed81p-1,
  0x1.5250cbef1e9fbp-1,
  0x1.538f57b89061fp-1,
  0x1.54ccaf0362c8fp-1,
  0x1.5608d29c70c34p-1,
  0x1.5743c352b33bap-1,
  0x1.587d81f732fbbp-1,
  0x1.59b60f5cfab9ep-1,
  0x1.5aed6c5909517p-1,
  0x1.5c2399c244261p-1,
  0x1.5d58987169b18p-1,
  0x1.5e8c6941043dp-1,
  0x1.5fbf0d0d5cc4ap-1,
  0x1.60f084b46e05fp-1,
  0x1.6220d115d7b8ep-1,
  0x1.634ff312d1f3bp-1,
  0x1.647deb8e20b9p-1,
  0x1.65aabb6c07b03p-1,
  0x1.66d663923e087p-1,
  0x1.6800e4e7e2858p-1,
  0x1.692a40556fb6ap-1,
  0x1.6a5276c4b0576p-1,
  0x1.6b798920b3d99p-1,
  0x1.6c9f7855c3198p-1,
  0x1.6dc44551553afp-1,
  0x1.6ee7f10204aefp-1,
  0x1.700a7c5784634p-1,
  0x1.712be84295198p-1,
  0x1.724c35b4fae7bp-1,
  0x1.736b65a172dffp-1,
  0x1.748978fba8e0fp-1,
  0x1.75a670b82d8d8p-1,
  0x1.76c24dcc6c6cp-1,
  0x1.77dd112ea22c7p-1,
  0x1.78f6bbd5d315ep-1,
  0x1.7a0f4eb9c19a2p-1,
  0x1.7b26cad2e50fep-1,
  0x1.7c3d311a6092bp-1,
  0x1.7d528289fa093p-1,
  0x1.7e66c01c114fep-1,
  0x1.7f79eacb97898p-1,
  0x1.808c03940694bp-1,
  0x1.819d0b7158a4dp-1,
  0x1.82ad036000005p-1,
  0x1.83bbec5cdee22p-1,
  0x1.84c9c7653f7ebp-1,
  0x1.85d69576cc2c5p-1,
  0x1.86e2578f87ae5p-1,
  0x1.87ed0eadc5a2ap-1,
  0x1.88f6bbd023119p-1,
  0x1.89ff5ff57f1f8p-1,
  0x1.8b06fc1cf3dffp-1,
  0x1.8c0d9145cf49dp-1,
  0x1.8d13206f8c4cbp-1,
  0x1.8e17aa99cc05ep-1,
  0x1.8f1b30c44f167p-1,
  0x1.901db3eeef187p-1,
  0x1.911f35199833bp-1,
  0x1.921fb54442d18p-1
};

static const double _512_over_pi_28[8] = {
  0x1.45f306cp+7,
  0x1.c9c882ap-21,
  0x1.4fe13a8p-51,
  0x1.f47d4dp-78,
  0x1.bb81b6cp-105,
  0x1.4acc9ep-135,
  0x1.0e4107cp-162,
  0x1.ca2c756p-189
};

static const double _512_over_pi_28_exp[8] = {-20, -48, -76, -104, -132, -160, -188, -216};

static const uint64_t _512_over_pi_int[4] = {0xfe5163abdebbc562, 0xdb6295993c439041, 0xfc2757d1f534ddc0, 0xa2f9836e4e441529};

#endif
