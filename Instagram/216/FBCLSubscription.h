//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLocationManagerSubscription-Protocol.h"

@class FBCLSubscriptionBinding, NSString;
@protocol FBCLSubscriptionDelegate;

@interface FBCLSubscription : NSObject <FBLocationManagerSubscription>
{
    FBCLSubscriptionBinding *_binding;
    NSString *_identifier;
    id <FBCLSubscriptionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBCLSubscriptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)bindTo:(id)arg1;
- (void)unsubscribe;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
