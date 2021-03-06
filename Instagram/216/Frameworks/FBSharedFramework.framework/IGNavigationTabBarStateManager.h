//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, UIViewController;
@protocol IGNavigationTabBarStateContextProvider;

@interface IGNavigationTabBarStateManager : NSObject
{
    id <IGNavigationTabBarStateContextProvider> _contextProvider;
    UIViewController *_topViewController;
    NSMapTable *_viewControllerAttributeMap;
}

- (void).cxx_destruct;
- (void)_persistAttributesForViewControllerAtIndex:(unsigned long long)arg1 viewControllers:(id)arg2;
- (void)_updateAttributesForTopViewController;
- (void)setTopViewController:(id)arg1;
- (long long)stateForViewController:(id)arg1;
- (id)initWithContextProvider:(id)arg1;

@end

