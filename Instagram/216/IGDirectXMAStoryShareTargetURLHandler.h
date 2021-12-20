//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectXMATargetURLHandling-Protocol.h"
#import "IGStoryViewerPresentationControllerDelegate-Protocol.h"

@class IGStoryViewerPresentationController, IGUserSession, NSString, NSURL;
@protocol IGDirectLoadingViewProtocol;

@interface IGDirectXMAStoryShareTargetURLHandler : NSObject <IGStoryViewerPresentationControllerDelegate, IGDirectXMATargetURLHandling>
{
    IGUserSession *_userSession;
    NSURL *_targetURL;
    IGStoryViewerPresentationController *_storyViewerPresentController;
    CDUnknownBlockType _presentationCompletionBlock;
    id <IGDirectLoadingViewProtocol> _loadingView;
}

- (void).cxx_destruct;
- (void)storyViewerPresentationControllerDidNavigateToMediaId:(id)arg1;
- (void)storyViewerPresentationControllerDidFinishOnMediaId:(id)arg1;
- (void)storyViewerPresentationControllerWillFinishOnMediaId:(id)arg1 viewerExitContextDict:(id)arg2;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)didTapMessageCellWithViewModel:(id)arg1 targetURL:(id)arg2 loadingView:(id)arg3 viewToPresentFrom:(id)arg4 sourceController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
