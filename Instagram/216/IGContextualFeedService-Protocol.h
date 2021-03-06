//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGSessionTracker, NSArray, NSString, UIViewController;
@protocol IGContextualFeedServiceDelegate;

@protocol IGContextualFeedService <NSObject>
@property(nonatomic) __weak id <IGContextualFeedServiceDelegate> delegate;
- (NSArray *)rightBarButtonItemsWithViewController:(UIViewController *)arg1;
- (void)removePivot:(NSString *)arg1;
- (NSString *)errorMessage;
- (long long)authorizationError;
- (IGSessionTracker *)sessionTracker;
- (NSArray *)posts;
- (NSArray *)allItemsVisibleAfter:(IGMedia *)arg1;
- (_Bool)moreAvailable;
- (_Bool)isFetchingMore;
- (_Bool)isFullyLoaded;
- (_Bool)fetchMoreItems;
- (_Bool)fetchData;
@end

