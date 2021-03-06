//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGStoryFullscreenStoryOwnerViewerButtonViewModel, NSString;
@protocol IGStoryItemType;

@interface IGStoryFullscreenOwnerFooterViewModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showInsightsButton;
    _Bool _showPromoteButton;
    _Bool _showHighlightButton;
    _Bool _showDirectButton;
    _Bool _showSelfViewCreationEntryPointButton;
    _Bool _isCurrentlyPromoted;
    _Bool _isHighlight;
    _Bool _isArchive;
    _Bool _disableArchiveReshareButton;
    _Bool _copyLinkShareEnabled;
    _Bool _systemShareEnabled;
    _Bool _displaceHighlightButtonForCreationEntryPoint;
    _Bool _displaceFacebookSharingButtonForCreationEntryPoint;
    _Bool _crossShareToFacebookEnabled;
    IGStoryFullscreenStoryOwnerViewerButtonViewModel *_storyOwnerViewerButtonViewModel;
    id <IGStoryItemType> _storyItem;
    unsigned long long _archiveNavButtonStyle;
    long long _viewerViewModelType;
    long long _crossShareToFacebookState;
    NSString *_module;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) _Bool crossShareToFacebookEnabled; // @synthesize crossShareToFacebookEnabled=_crossShareToFacebookEnabled;
@property(readonly, nonatomic) long long crossShareToFacebookState; // @synthesize crossShareToFacebookState=_crossShareToFacebookState;
@property(readonly, nonatomic) long long viewerViewModelType; // @synthesize viewerViewModelType=_viewerViewModelType;
@property(readonly, nonatomic) _Bool displaceFacebookSharingButtonForCreationEntryPoint; // @synthesize displaceFacebookSharingButtonForCreationEntryPoint=_displaceFacebookSharingButtonForCreationEntryPoint;
@property(readonly, nonatomic) _Bool displaceHighlightButtonForCreationEntryPoint; // @synthesize displaceHighlightButtonForCreationEntryPoint=_displaceHighlightButtonForCreationEntryPoint;
@property(readonly, nonatomic) _Bool systemShareEnabled; // @synthesize systemShareEnabled=_systemShareEnabled;
@property(readonly, nonatomic) _Bool copyLinkShareEnabled; // @synthesize copyLinkShareEnabled=_copyLinkShareEnabled;
@property(readonly, nonatomic) _Bool disableArchiveReshareButton; // @synthesize disableArchiveReshareButton=_disableArchiveReshareButton;
@property(readonly, nonatomic) unsigned long long archiveNavButtonStyle; // @synthesize archiveNavButtonStyle=_archiveNavButtonStyle;
@property(readonly, nonatomic) _Bool isArchive; // @synthesize isArchive=_isArchive;
@property(readonly, nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(readonly, nonatomic) _Bool isCurrentlyPromoted; // @synthesize isCurrentlyPromoted=_isCurrentlyPromoted;
@property(readonly, nonatomic) _Bool showSelfViewCreationEntryPointButton; // @synthesize showSelfViewCreationEntryPointButton=_showSelfViewCreationEntryPointButton;
@property(readonly, nonatomic) _Bool showDirectButton; // @synthesize showDirectButton=_showDirectButton;
@property(readonly, nonatomic) _Bool showHighlightButton; // @synthesize showHighlightButton=_showHighlightButton;
@property(readonly, nonatomic) _Bool showPromoteButton; // @synthesize showPromoteButton=_showPromoteButton;
@property(readonly, nonatomic) _Bool showInsightsButton; // @synthesize showInsightsButton=_showInsightsButton;
@property(readonly, nonatomic) id <IGStoryItemType> storyItem; // @synthesize storyItem=_storyItem;
@property(readonly, copy, nonatomic) IGStoryFullscreenStoryOwnerViewerButtonViewModel *storyOwnerViewerButtonViewModel; // @synthesize storyOwnerViewerButtonViewModel=_storyOwnerViewerButtonViewModel;
- (id)initWithStoryOwnerViewerButtonViewModel:(id)arg1 storyItem:(id)arg2 showInsightsButton:(_Bool)arg3 showPromoteButton:(_Bool)arg4 showHighlightButton:(_Bool)arg5 showDirectButton:(_Bool)arg6 showSelfViewCreationEntryPointButton:(_Bool)arg7 isCurrentlyPromoted:(_Bool)arg8 isHighlight:(_Bool)arg9 isArchive:(_Bool)arg10 archiveNavButtonStyle:(unsigned long long)arg11 disableArchiveReshareButton:(_Bool)arg12 copyLinkShareEnabled:(_Bool)arg13 systemShareEnabled:(_Bool)arg14 displaceHighlightButtonForCreationEntryPoint:(_Bool)arg15 displaceFacebookSharingButtonForCreationEntryPoint:(_Bool)arg16 viewerViewModelType:(long long)arg17 crossShareToFacebookState:(long long)arg18 crossShareToFacebookEnabled:(_Bool)arg19 module:(id)arg20;

@end

