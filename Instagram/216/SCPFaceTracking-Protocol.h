//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPFaceTrackerResult;

@protocol SCPFaceTracking <NSObject>
- (SCPFaceTrackerResult *)lastResult;
- (void)processSampleBuffer:(struct __CVBuffer *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 normalizedBeginFaceAlignmentRect:(struct CGRect)arg4 normalizedFailFaceAlignmentRect:(struct CGRect)arg5 completion:(void (^)(void))arg6;
@end
