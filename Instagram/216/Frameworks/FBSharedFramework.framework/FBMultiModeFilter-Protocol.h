//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBMetalSurface, FBSurface, NSDictionary;
@protocol FBDepthData;

@protocol FBMultiModeFilter <NSObject>
- (_Bool)iglRender:(FBMetalSurface *)arg1 depthBuffer:(id <FBDepthData>)arg2 additionalData:(NSDictionary *)arg3 to:(FBMetalSurface *)arg4 time:(CDStruct_1b6d18a9)arg5 renderingMode:(unsigned long long)arg6;
- (_Bool)render:(FBSurface *)arg1 depthBuffer:(id <FBDepthData>)arg2 additionalData:(NSDictionary *)arg3 to:(FBSurface *)arg4 time:(CDStruct_1b6d18a9)arg5 renderingMode:(unsigned long long)arg6;
@end

