//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"

@class IGFeedNetworkSource, NSString;

@interface IGFeedItemDetailFetcher : NSObject <IGFeedNetworkSourceDelegate>
{
    IGFeedNetworkSource *_feedNetworkSource;
    CDUnknownBlockType _completionHandler;
}

+ (void)fetchDetailsForMedia:(id)arg1 userSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)_finish;
- (void)_fetch;
- (id)_initPrivateWithMedia:(id)arg1 userSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

