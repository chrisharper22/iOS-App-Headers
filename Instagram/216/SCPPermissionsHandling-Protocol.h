//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCPPermissionsHandling <NSObject, NSCopying>
- (void)requestCameraPermissions:(void (^)(long long))arg1;
- (_Bool)cameraPermissionWasDenied;
- (_Bool)requiresCameraPermission;
@end

