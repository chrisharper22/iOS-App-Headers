//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAPIClient, IGContentFundingDealsConfigFetcherDelegate;

@interface IGContentFundingDealsConfigFetcher : NSObject
{
    id <IGAPIClient> _networker;
    long long _fetchAttemptsRemaining;
    id <IGContentFundingDealsConfigFetcherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContentFundingDealsConfigFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleFailureWithError:(id)arg1 mediaID:(id)arg2;
- (void)_handleParsingWithResponse:(id)arg1;
- (void)fetchDealsConfigWithMediaID:(id)arg1;
- (id)initWithNetworker:(id)arg1;

@end

