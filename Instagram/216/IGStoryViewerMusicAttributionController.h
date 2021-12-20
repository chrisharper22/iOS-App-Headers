//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryViewerHeaderAttributionTooltipProvider-Protocol.h"
#import "IGStoryViewerHeaderAttributionType-Protocol.h"

@class IGMusicStickerTapModelObject, IGUserSession, NSString;

@interface IGStoryViewerMusicAttributionController : NSObject <IGStoryViewerHeaderAttributionTooltipProvider, IGStoryViewerHeaderAttributionType>
{
    IGUserSession *_userSession;
    _Bool _isDisabledAttributionType;
    IGMusicStickerTapModelObject *_musicStickerTapModelObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMusicStickerTapModelObject *musicStickerTapModelObject; // @synthesize musicStickerTapModelObject=_musicStickerTapModelObject;
- (id)headerAttributionAnalyticsTag;
- (void)headerAttributionWillShowTooltip;
- (_Bool)headerAttributionShouldShowTooltip;
- (id)headerAttributionTooltipText;
- (id)analyticsString;
- (void)didTakeActionWithTitle:(id)arg1 attributionDelegate:(id)arg2 navigationController:(id)arg3;
- (id)newAttributionView;
- (_Bool)shouldBeIncludedInMultiAttributionBottomSheet;
- (_Bool)alwaysShowActionSheetOnTap;
- (_Bool)userInteractionEnabled;
- (id)tooltipProvider;
- (id)actionSheetButtonTitles;
- (id)initWithMusicStickerTapModel:(id)arg1 isDisabledAttributionType:(_Bool)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
