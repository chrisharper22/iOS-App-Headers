//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGIntent, IGMegaphoneButton, NSURL, UIViewController;
@protocol IGMegaphonePresenterProtocol;

@protocol IGMegaphonePresenterDelegate <NSObject>
- (void)megaphonePresenterNeedsMegaphoneResize:(id <IGMegaphonePresenterProtocol>)arg1;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 handleButton:(IGMegaphoneButton *)arg2;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 handleUserScopedIntent:(IGIntent *)arg2;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 handleURL:(NSURL *)arg2 shouldDismiss:(_Bool)arg3;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 logButtonClickIfNeeded:(IGMegaphoneButton *)arg2;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)megaphonePresenterPopToMegaphonePresenterViewController;
- (void)megaphonePresenterPopViewController:(id <IGMegaphonePresenterProtocol>)arg1;
- (void)megaphonePresenter:(id <IGMegaphonePresenterProtocol>)arg1 pushViewController:(UIViewController *)arg2;
- (void)megaphonePresenterDidDismiss:(id <IGMegaphonePresenterProtocol>)arg1;
@end

