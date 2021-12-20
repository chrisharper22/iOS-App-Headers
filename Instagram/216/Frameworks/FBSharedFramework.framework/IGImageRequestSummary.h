//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MOSNetworkRequestSummary-Protocol.h>

@class NSString;

@interface IGImageRequestSummary : NSObject <MOSNetworkRequestSummary>
{
    NSString *_traceToken;
    long long _totalBytesDownloaded;
}

- (void).cxx_destruct;
- (long long)totalBytesDownloaded;
- (id)traceToken;
- (id)initWithTraceToken:(id)arg1 totalBytesDownloaded:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

