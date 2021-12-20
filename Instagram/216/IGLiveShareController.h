//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAPIClient;

@interface IGLiveShareController : NSObject
{
    id <IGAPIClient> _networker;
}

+ (id)_shareRequestForBroadcastId:(id)arg1 shareType:(long long)arg2 withText:(id)arg3 toRecipients:(id)arg4 startPlaybackAtOffset:(long long)arg5;
- (void).cxx_destruct;
- (void)shareBroadcastId:(id)arg1 shareType:(long long)arg2 withText:(id)arg3 toRecipients:(id)arg4 startPlaybackAtOffset:(long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)initWithNetworker:(id)arg1;

@end
