//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkOperation-Protocol.h>

@class NSString, NSURL;
@protocol IGRequestToken;

@interface IGRequestTokenNetworkOperation : NSObject <IGNetworkOperation>
{
    NSURL *_url;
    NSString *_requestRangeHeader;
    id <IGRequestToken> _requestToken;
    id _cancellationIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id cancellationIdentifier; // @synthesize cancellationIdentifier=_cancellationIdentifier;
@property(retain, nonatomic) id <IGRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *requestRangeHeader; // @synthesize requestRangeHeader=_requestRangeHeader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (double)requestDownloadProgress;
- (id)networkMonitorLabel;
- (long long)queuePriority;
- (_Bool)isExecuting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

