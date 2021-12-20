//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectVisualMessageViewerConfiguration : NSObject
{
    _Bool _allowLoadingEmptyViewer;
    _Bool _showCloseButton;
    _Bool _showComposer;
    _Bool _showHeaderView;
    _Bool _showProgressView;
    _Bool _enableSwipeDownToDismiss;
    _Bool _enableVideoSeekPreview;
    _Bool _enableShowAllPublishedVisualMessages;
}

+ (id)defaultConfigurationForEmbeddingWithinTimelineWithLauncherSet:(id)arg1;
+ (id)defaultConfigurationWithComposer:(_Bool)arg1;
@property(readonly, nonatomic) _Bool enableShowAllPublishedVisualMessages; // @synthesize enableShowAllPublishedVisualMessages=_enableShowAllPublishedVisualMessages;
@property(readonly, nonatomic) _Bool enableVideoSeekPreview; // @synthesize enableVideoSeekPreview=_enableVideoSeekPreview;
@property(readonly, nonatomic) _Bool enableSwipeDownToDismiss; // @synthesize enableSwipeDownToDismiss=_enableSwipeDownToDismiss;
@property(readonly, nonatomic) _Bool showProgressView; // @synthesize showProgressView=_showProgressView;
@property(readonly, nonatomic) _Bool showHeaderView; // @synthesize showHeaderView=_showHeaderView;
@property(readonly, nonatomic) _Bool showComposer; // @synthesize showComposer=_showComposer;
@property(readonly, nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(readonly, nonatomic) _Bool allowLoadingEmptyViewer; // @synthesize allowLoadingEmptyViewer=_allowLoadingEmptyViewer;
- (id)initWithAllowLoadingEmptyViewer:(_Bool)arg1 showCloseButton:(_Bool)arg2 showComposer:(_Bool)arg3 showHeaderView:(_Bool)arg4 showProgressView:(_Bool)arg5 enableSwipeDownToDismiss:(_Bool)arg6 enableVideoSeekPreview:(_Bool)arg7 enableShowAllPublishedVisualMessages:(_Bool)arg8;

@end

