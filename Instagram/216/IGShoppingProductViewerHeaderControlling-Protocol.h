//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol IGShoppingProductViewerHeaderControllingDelegate;

@protocol IGShoppingProductViewerHeaderControlling <NSObject>
@property(readonly, nonatomic) NSArray *accessibilityElements;
@property(readonly, nonatomic) struct CGRect headerFrame;
@property(nonatomic) long long dismissIconType;
@property(nonatomic) _Bool bagButtonEnabled;
@property(nonatomic) _Bool moreButtonEnabled;
@property(nonatomic) __weak id <IGShoppingProductViewerHeaderControllingDelegate> delegate;
- (long long)preferredStatusBarAnimation;
@end
