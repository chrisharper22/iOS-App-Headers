//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraTrayViewController, NSString, NSURL;
@protocol IGImageProcessor;

@protocol IGCameraTrayViewControllerDataSource <NSObject>
- (_Bool)cameraTrayViewController:(IGCameraTrayViewController *)arg1 shouldDisplayBadgeOnItemAtIndex:(long long)arg2;
- (_Bool)cameraTrayViewController:(IGCameraTrayViewController *)arg1 shouldAllowMoreInfoAccessForItemAtIndex:(long long)arg2;
- (UIImage * (^)(void))cameraTrayViewController:(IGCameraTrayViewController *)arg1 imageProviderForItemAtIndex:(long long)arg2 isHighlighted:(_Bool)arg3;
- (id <IGImageProcessor>)cameraTrayViewController:(IGCameraTrayViewController *)arg1 imageProcessorForItemAtIndex:(long long)arg2;
- (NSURL *)cameraTrayViewController:(IGCameraTrayViewController *)arg1 imageURLForItemAtIndex:(long long)arg2 isHighlighted:(_Bool)arg3;
- (NSString *)cameraTrayViewController:(IGCameraTrayViewController *)arg1 accessibilityHintForItemAtIndex:(long long)arg2;
- (NSString *)cameraTrayViewController:(IGCameraTrayViewController *)arg1 accessibilityLabelForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCameraTrayViewController:(IGCameraTrayViewController *)arg1;
@end

