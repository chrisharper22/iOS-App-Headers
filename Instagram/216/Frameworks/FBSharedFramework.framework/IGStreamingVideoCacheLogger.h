//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface IGStreamingVideoCacheLogger : NSObject
{
    NSString *_networkRequestVideoID;
    NSURL *_networkRequestURL;
    struct _NSRange _networkRequestRange;
    long long _networkRequestReason;
}

+ (id)_eventWithName:(id)arg1 videoID:(id)arg2 URL:(id)arg3 range:(struct _NSRange)arg4 reason:(long long)arg5;
- (void).cxx_destruct;
- (void)logAttachToNetworkRequestForVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
- (void)logReadFromDiskForVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
- (void)logEndNetworkRequest;
- (void)logBeginNetworkRequestWithVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
- (void)logReadAllRangesForVideoID:(id)arg1 URL:(id)arg2 ranges:(id)arg3 reason:(long long)arg4;
- (void)logReadContentLength:(long long)arg1 ForVideoID:(id)arg2 URL:(id)arg3 range:(struct _NSRange)arg4 reason:(long long)arg5;

@end

