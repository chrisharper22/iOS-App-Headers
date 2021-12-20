//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGDirectMediaPickerViewControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class CALayer, IGDirectMediaPickerConfig, IGDirectMediaPickerViewController, IGUserSession, NSString, UILabel, UIView;
@protocol IGCoWatchContentPickerViewControllerDelegate;

@interface IGCoWatchContentPickerViewController : UIViewController <IGDirectMediaPickerViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGDirectMediaPickerConfig *_mediaPickerConfig;
    id <IGCoWatchContentPickerViewControllerDelegate> _delegate;
    IGDirectMediaPickerViewController *_mediaPickerViewController;
    UILabel *_statusMessageLabel;
    CALayer *_bottomBorder;
    UIView *_statusHeader;
}

- (void).cxx_destruct;
- (_Bool)isFullscreen;
- (void)mediaPickerViewControllerDidShowBrowseMore:(id)arg1;
- (void)mediaPickerViewControllerDidSelectBrowseMore:(id)arg1;
- (void)mediaPickerViewController:(id)arg1 didSelectTabItem:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didSelectFacebookVideo:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didSelectPreviewMedia:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didTapSendWithFeedItems:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didTapSendWithPreviewMedia:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didSelectFeedItem:(id)arg2 contentIndex:(unsigned long long)arg3 contentSource:(id)arg4;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 mediaPickerConfig:(id)arg2 delegate:(id)arg3 launcherSet:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
