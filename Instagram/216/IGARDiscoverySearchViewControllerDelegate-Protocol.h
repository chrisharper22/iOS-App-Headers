//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectGallerySearchViewController, NSString, NSURL;

@protocol IGARDiscoverySearchViewControllerDelegate <NSObject>
- (void)searchViewControllerDidTapTryIt:(IGCameraEffectGallerySearchViewController *)arg1 onEffectWithID:(NSString *)arg2 effectName:(NSString *)arg3 effectIconURL:(NSURL *)arg4;
- (_Bool)searchViewControllerShouldPresentCamera:(IGCameraEffectGallerySearchViewController *)arg1;
- (void)searchViewControllerDidTapCancel:(IGCameraEffectGallerySearchViewController *)arg1;
@end

