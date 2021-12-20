//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGNavigationController, UINavigationController, UIViewController;

@interface IGIntentNavigationPresenter : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UINavigationController *_usingUINavigationController_navigationController;
    IGNavigationController *_usingIGNavigationController_navigationController;
    UIViewController *_usingUIViewController_viewController;
}

+ (id)usingUIViewControllerWithViewController:(id)arg1;
+ (id)usingUINavigationControllerWithNavigationController:(id)arg1;
+ (id)usingIGNavigationControllerWithNavigationController:(id)arg1;
- (void).cxx_destruct;
- (void)matchUsingUINavigationController:(CDUnknownBlockType)arg1 usingIGNavigationController:(CDUnknownBlockType)arg2 usingUIViewController:(CDUnknownBlockType)arg3;

@end
