//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol IGVideoTranscoderProtocol <NSObject>
- (void)cancel;
- (void)startWithProgress:(void (^)(double))arg1 segmentStart:(void (^)(IGMediaTranscodedSegment *, struct))arg2 segmentCompletion:(void (^)(IGMediaTranscodedSegment *))arg3 completion:(void (^)(NSError *, IGSegmentsCompositionResult *))arg4 imageCompletion:(void (^)(struct opaqueCMSampleBuffer *))arg5;
@end
