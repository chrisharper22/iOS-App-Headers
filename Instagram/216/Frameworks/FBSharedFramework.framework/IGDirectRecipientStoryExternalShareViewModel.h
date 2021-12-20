//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRecipientCellViewModelProtocol-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGDirectShareSheetOneTapButtonViewModel, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, IGUserSession, NSString, UIColor;

@interface IGDirectRecipientStoryExternalShareViewModel : NSObject <IGListDiffable, IGDirectRecipientCellViewModelProtocol>
{
    IGImageTitleSubtitleViewModel *_subviewModel;
    IGDirectShareSheetOneTapButtonViewModel *_oneTapViewModel;
    _Bool _isSelected;
    _Bool _isEnabled;
    UIColor *_backgroundColor;
    IGUserSession *_userSession;
    long long _serviceType;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)accessibilityLabel;
- (long long)buttonType;
- (int)recipientTargetType;
- (id)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (unsigned long long)subtitleAccessoryType;
- (_Bool)showLoadingIndicatorAccessoryView;
- (id)backgroundColor;
- (_Bool)showDottedCircleAccessoryView;
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (id)oneTapViewModel;
- (id)subviewModel;
- (id)initWithServiceType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 layoutSpec:(id)arg4 isSelected:(_Bool)arg5 isEnabled:(_Bool)arg6 backgroundColor:(id)arg7 oneTapButtonViewModel:(id)arg8;
- (id)initWithServiceType:(long long)arg1 layoutSpec:(id)arg2 isSelected:(_Bool)arg3 isEnabled:(_Bool)arg4 backgroundColor:(id)arg5 subviewModel:(id)arg6 oneTapButtonViewModel:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

