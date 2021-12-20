//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCommentAttachment, IGMedia, IGStyledString, IGUser, NSArray, NSString;

@interface IGCommentSectionViewModel : NSObject
{
    _Bool _hasLiked;
    _Bool _showFanClubBadge;
    _Bool _isChildComment;
    _Bool _useInlineStyle;
    _Bool _canHidePIA;
    _Bool _hasTranslation;
    _Bool _isNew;
    _Bool _canShowCheckmarkButton;
    _Bool _isSelected;
    _Bool _isPinned;
    _Bool _showUnhideButton;
    _Bool _privateReplyEnabled;
    _Bool _isLimited;
    _Bool _hidePinnedAndReplyButton;
    _Bool _isHidden;
    IGUser *_commentAuthor;
    NSString *_commentText;
    IGStyledString *_commentStyledString;
    NSString *_timestampString;
    NSString *_accessibilityTimestampString;
    long long _likeCount;
    long long _replyCount;
    long long _socialContextType;
    NSArray *_socialContextLikers;
    long long _commentState;
    NSString *_commentPostError;
    unsigned long long _mitigationAction;
    NSArray *_violatingUsers;
    long long _contentEnabledAction;
    NSString *_module;
    long long _likeButtonPosition;
    long long _likeCountPosition;
    long long _translationState;
    long long _restrictStatus;
    long long _privateReplyStatus;
    long long _limitStatus;
    NSString *_reactionText;
    long long _reactionCount;
    IGCommentAttachment *_commentAttachment;
    IGMedia *_replyCommentMedia;
}

+ (id)commentViewModelFromComment:(id)arg1 isChildComment:(_Bool)arg2 style:(long long)arg3 socialContextType:(long long)arg4 contentEnabledAction:(long long)arg5 useInlineStyle:(_Bool)arg6 canHidePIA:(_Bool)arg7 likeButtonPosition:(long long)arg8 likeCountPosition:(long long)arg9 module:(id)arg10 width:(double)arg11 canShowCheckmarkButton:(_Bool)arg12 showUnhideButton:(_Bool)arg13 privateReplyEnabled:(_Bool)arg14 hidePinnedAndReplyButton:(_Bool)arg15 limitStatus:(long long)arg16 replyCommentMedia:(id)arg17;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGMedia *replyCommentMedia; // @synthesize replyCommentMedia=_replyCommentMedia;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) IGCommentAttachment *commentAttachment; // @synthesize commentAttachment=_commentAttachment;
@property(readonly, nonatomic) long long reactionCount; // @synthesize reactionCount=_reactionCount;
@property(readonly, nonatomic) NSString *reactionText; // @synthesize reactionText=_reactionText;
@property(readonly, nonatomic) long long limitStatus; // @synthesize limitStatus=_limitStatus;
@property(readonly, nonatomic) _Bool hidePinnedAndReplyButton; // @synthesize hidePinnedAndReplyButton=_hidePinnedAndReplyButton;
@property(readonly, nonatomic) _Bool isLimited; // @synthesize isLimited=_isLimited;
@property(readonly, nonatomic) long long privateReplyStatus; // @synthesize privateReplyStatus=_privateReplyStatus;
@property(readonly, nonatomic) _Bool privateReplyEnabled; // @synthesize privateReplyEnabled=_privateReplyEnabled;
@property(readonly, nonatomic) _Bool showUnhideButton; // @synthesize showUnhideButton=_showUnhideButton;
@property(readonly, nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) _Bool canShowCheckmarkButton; // @synthesize canShowCheckmarkButton=_canShowCheckmarkButton;
@property(readonly, nonatomic) long long restrictStatus; // @synthesize restrictStatus=_restrictStatus;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(readonly, nonatomic) long long translationState; // @synthesize translationState=_translationState;
@property(readonly, nonatomic) _Bool hasTranslation; // @synthesize hasTranslation=_hasTranslation;
@property(readonly, nonatomic) long long likeCountPosition; // @synthesize likeCountPosition=_likeCountPosition;
@property(readonly, nonatomic) long long likeButtonPosition; // @synthesize likeButtonPosition=_likeButtonPosition;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) _Bool canHidePIA; // @synthesize canHidePIA=_canHidePIA;
@property(readonly, nonatomic) _Bool useInlineStyle; // @synthesize useInlineStyle=_useInlineStyle;
@property(readonly, nonatomic) long long contentEnabledAction; // @synthesize contentEnabledAction=_contentEnabledAction;
@property(readonly, nonatomic) _Bool isChildComment; // @synthesize isChildComment=_isChildComment;
@property(readonly, copy, nonatomic) NSArray *violatingUsers; // @synthesize violatingUsers=_violatingUsers;
@property(readonly, nonatomic) unsigned long long mitigationAction; // @synthesize mitigationAction=_mitigationAction;
@property(readonly, copy, nonatomic) NSString *commentPostError; // @synthesize commentPostError=_commentPostError;
@property(readonly, nonatomic) long long commentState; // @synthesize commentState=_commentState;
@property(readonly, copy, nonatomic) NSArray *socialContextLikers; // @synthesize socialContextLikers=_socialContextLikers;
@property(readonly, nonatomic) long long socialContextType; // @synthesize socialContextType=_socialContextType;
@property(readonly, nonatomic) _Bool showFanClubBadge; // @synthesize showFanClubBadge=_showFanClubBadge;
@property(readonly, nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(readonly, nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(readonly, nonatomic) NSString *accessibilityTimestampString; // @synthesize accessibilityTimestampString=_accessibilityTimestampString;
@property(readonly, nonatomic) NSString *timestampString; // @synthesize timestampString=_timestampString;
@property(readonly, nonatomic) IGStyledString *commentStyledString; // @synthesize commentStyledString=_commentStyledString;
@property(readonly, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(readonly, nonatomic) IGUser *commentAuthor; // @synthesize commentAuthor=_commentAuthor;
- (id)_initWithCommentAuthor:(id)arg1 commentText:(id)arg2 commentStyledString:(id)arg3 timestampString:(id)arg4 accessibilityTimestampString:(id)arg5 hasLiked:(_Bool)arg6 likeCount:(long long)arg7 replyCount:(long long)arg8 reactionText:(id)arg9 reactionCount:(long long)arg10 showFanClubBadge:(_Bool)arg11 socialContextType:(long long)arg12 socialContextLikers:(id)arg13 commentState:(long long)arg14 commentPostError:(id)arg15 isChildComment:(_Bool)arg16 contentEnabledAction:(long long)arg17 useInlineStyle:(_Bool)arg18 canHidePIA:(_Bool)arg19 likeButtonPosition:(long long)arg20 likeCountPosition:(long long)arg21 module:(id)arg22 hasTranslation:(_Bool)arg23 translationState:(long long)arg24 isNew:(_Bool)arg25 restrictStatus:(long long)arg26 suggestedMitigation:(unsigned long long)arg27 violatingUsers:(id)arg28 canShowCheckmarkButton:(_Bool)arg29 isSelected:(_Bool)arg30 isPinned:(_Bool)arg31 showUnhideButton:(_Bool)arg32 privateReplyEnabled:(_Bool)arg33 privateReplyStatus:(long long)arg34 isLimited:(_Bool)arg35 hidePinnedAndReplyButton:(_Bool)arg36 limitStatus:(long long)arg37 replyCommentMedia:(id)arg38 commentAttachment:(id)arg39 isHidden:(_Bool)arg40;

@end

