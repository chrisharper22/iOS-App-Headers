//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIView, UIViewController;
@protocol IGDirectLoadingViewProtocol, IGDirectMessageViewModelProtocol;

@protocol IGDirectXMATargetURLHandling <NSObject>
- (void)didTapMessageCellWithViewModel:(id <IGDirectMessageViewModelProtocol>)arg1 targetURL:(NSURL *)arg2 loadingView:(id <IGDirectLoadingViewProtocol>)arg3 viewToPresentFrom:(UIView *)arg4 sourceController:(UIViewController *)arg5 completion:(void (^)(void))arg6;
@end

