//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;
@protocol IGUploadTaskListener;

@protocol IGUploadTaskType <NSObject>
- (void)removeListener:(id <IGUploadTaskListener>)arg1;
- (void)addListener:(id <IGUploadTaskListener>)arg1;
- (void)cancel;
- (long long)status;
- (double)progress;
- (NSString *)taskId;
@end

