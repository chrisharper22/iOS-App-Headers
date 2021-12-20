//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPreviewingDelegate-Protocol.h"

@class IGFeedItemPreviewingHandler, IGHashtagPreviewingHandler, IGUserPreviewingHandler, NSString;
@protocol IGContextMenuInteractionDelegate, UIViewControllerPreviewingDelegate;

@interface IGFeedPreviewingHandler : NSObject <IGPreviewingDelegate>
{
    IGUserPreviewingHandler *_userDelegate;
    IGHashtagPreviewingHandler *_hashtagDelegate;
    IGFeedItemPreviewingHandler *_feedDelegate;
    id <UIViewControllerPreviewingDelegate> _usedDelegate;
    id <IGContextMenuInteractionDelegate> _usedContextDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGContextMenuInteractionDelegate> usedContextDelegate; // @synthesize usedContextDelegate=_usedContextDelegate;
@property(retain, nonatomic) id <UIViewControllerPreviewingDelegate> usedDelegate; // @synthesize usedDelegate=_usedDelegate;
@property(readonly, nonatomic) IGFeedItemPreviewingHandler *feedDelegate; // @synthesize feedDelegate=_feedDelegate;
@property(readonly, nonatomic) IGHashtagPreviewingHandler *hashtagDelegate; // @synthesize hashtagDelegate=_hashtagDelegate;
@property(readonly, nonatomic) IGUserPreviewingHandler *userDelegate; // @synthesize userDelegate=_userDelegate;
- (void)performViewControllerCommitForPreviewedItem;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 feedViewController:(id)arg2 sponsoredSupportConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

