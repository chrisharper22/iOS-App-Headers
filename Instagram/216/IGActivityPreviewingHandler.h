//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPreviewingDelegate-Protocol.h"

@class IGFeedItemPreviewingHandler, IGUserPreviewingHandler, NSString;
@protocol IGContextMenuInteractionDelegate, UIViewControllerPreviewingDelegate;

@interface IGActivityPreviewingHandler : NSObject <IGPreviewingDelegate>
{
    IGUserPreviewingHandler *_userDelegate;
    IGFeedItemPreviewingHandler *_feedItemDelegate;
    id <UIViewControllerPreviewingDelegate> _usedDelegate;
    id <IGContextMenuInteractionDelegate> _usedContextDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGContextMenuInteractionDelegate> usedContextDelegate; // @synthesize usedContextDelegate=_usedContextDelegate;
@property(retain, nonatomic) id <UIViewControllerPreviewingDelegate> usedDelegate; // @synthesize usedDelegate=_usedDelegate;
@property(retain, nonatomic) IGFeedItemPreviewingHandler *feedItemDelegate; // @synthesize feedItemDelegate=_feedItemDelegate;
@property(retain, nonatomic) IGUserPreviewingHandler *userDelegate; // @synthesize userDelegate=_userDelegate;
- (void)performViewControllerCommitForPreviewedItem;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 newsListViewController:(id)arg2 scrollView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

