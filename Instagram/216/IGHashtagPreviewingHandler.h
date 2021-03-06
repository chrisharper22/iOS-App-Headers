//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGPreviewPresentationDelegate-Protocol.h"
#import "IGPreviewingDelegate-Protocol.h"

@class IGFeedHashtagPreviewHandler, IGHashtagModel, IGUserSession, IGViewController, NSString;
@protocol IGDirectShareSheetControlling, IGFeedPreviewingType;

@interface IGHashtagPreviewingHandler : NSObject <IGDirectShareSheetControllerDelegate, IGPreviewPresentationDelegate, IGPreviewingDelegate>
{
    IGUserSession *_userSession;
    IGViewController<IGFeedPreviewingType> *_controller;
    IGFeedHashtagPreviewHandler *_handler;
    id <IGDirectShareSheetControlling> _reshareController;
    IGHashtagModel *_hashtag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
@property(retain, nonatomic) id <IGDirectShareSheetControlling> reshareController; // @synthesize reshareController=_reshareController;
@property(readonly, nonatomic) IGFeedHashtagPreviewHandler *handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) __weak IGViewController<IGFeedPreviewingType> *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)previewControllerWillPresentDirectShareSheetController:(id)arg1;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (id)_contextMenuConfigurationForHashtag:(id)arg1;
- (id)_previewViewControllerForHashtag:(id)arg1 previewingContext:(id)arg2;
- (id)_previewHashtagForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2 sourceRect:(struct CGRect *)arg3;
- (void)performViewControllerCommitForPreviewedItem;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 controller:(id)arg2 handler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

