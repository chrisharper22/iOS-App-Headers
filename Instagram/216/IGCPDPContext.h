//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBWeakObjectContainer, IGShoppingConsumptionFeedItemLogger;

@interface IGCPDPContext : NSObject
{
    IGShoppingConsumptionFeedItemLogger *_logger;
    FBWeakObjectContainer *_viewControllerContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBWeakObjectContainer *viewControllerContainer; // @synthesize viewControllerContainer=_viewControllerContainer;
@property(readonly, nonatomic) IGShoppingConsumptionFeedItemLogger *logger; // @synthesize logger=_logger;
- (id)initWithLogger:(id)arg1 viewControllerContainer:(id)arg2;

@end
