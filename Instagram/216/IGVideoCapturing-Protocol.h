//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FBCCMediaEventWaterfallLogging, IGVideoProcessorControlling, OS_dispatch_queue;

@protocol IGVideoCapturing <NSObject>
@property(retain, nonatomic) id <IGVideoProcessorControlling> videoProcessorController;
- (id <FBCCMediaEventWaterfallLogging>)waterfallLogger;
- (NSObject<OS_dispatch_queue> *)audioBufferQueue;
- (NSObject<OS_dispatch_queue> *)videoBufferQueue;
- (id <IGVideoProcessorControlling>)createNewVideoProcessorController;
@end

