//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewController;
@protocol IGDirectInboxControlling, IGDirectInboxNavigationDelegate;

@protocol IGDirectInboxNavigating <NSObject>
@property(readonly, nonatomic) IGViewController<IGDirectInboxControlling> *inboxViewController;
@property(nonatomic) __weak id <IGDirectInboxNavigationDelegate> inboxNavigationDelegate;
@end

