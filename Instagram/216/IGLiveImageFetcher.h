//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGLiveImageFetcherDelegate;

@interface IGLiveImageFetcher : NSObject
{
    id <IGLiveImageFetcherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveImageFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchImageWithUrl:(id)arg1 userInfo:(id)arg2 module:(id)arg3 cacheFetchType:(long long)arg4 supportTier:(long long)arg5;

@end
