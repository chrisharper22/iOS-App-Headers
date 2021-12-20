//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGEmojiProviderUpdateListener-Protocol.h>
#import <FBSharedFramework/IGEmojiSelectionViewDelegate-Protocol.h>

@class IGEmojiSelectionView, IGUserSession, NSString, UIView;
@protocol IGEmojiSelectionViewControllerDelegate, IGEmojiSelectionViewControllerLoggingDelegate;

@interface IGEmojiSelectionViewController : IGViewController <IGEmojiProviderUpdateListener, IGEmojiSelectionViewDelegate>
{
    IGUserSession *_userSession;
    UIView *_containerView;
    IGEmojiSelectionView *_emojiSelectionView;
    _Bool _disableNavEvent;
    id <IGEmojiSelectionViewControllerDelegate> _delegate;
    id <IGEmojiSelectionViewControllerLoggingDelegate> _loggingDelegate;
}

+ (double)emojiSelectionViewHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGEmojiSelectionViewControllerLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <IGEmojiSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateEmojiSelectionViewWithLatestEmoji;
- (void)suggestedEmojiProviderDidUpdateEmojis;
- (void)emojiSelectionView:(id)arg1 didTapEmoji:(id)arg2 atIndex:(long long)arg3;
- (void)_setupEmojiSelectionView;
- (_Bool)disableNavigationEvent;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 containerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

