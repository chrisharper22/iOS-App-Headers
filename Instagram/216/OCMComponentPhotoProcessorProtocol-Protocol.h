//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "OCMComponentProtocol-Protocol.h"

@class FBCapturePhoto;

@protocol OCMComponentPhotoProcessorProtocol <OCMComponentProtocol>
- (void)processCapturedPhoto:(FBCapturePhoto *)arg1 withSettings:(CDStruct_d7960f6c)arg2 completion:(void (^)(OCMSampleBuffer *, NSError *))arg3;
@end

