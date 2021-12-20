//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGDirectRecipientCellViewModelProtocol-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGDirectRecipientCellViewModel : IGValueObject <IGDirectRecipientCellViewModelProtocol, IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (id)positionInSection;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithRecipient:(id)arg1 layoutSpec:(id)arg2 buttonType:(long long)arg3 showAccessoryViewImage:(_Bool)arg4 isSelected:(_Bool)arg5 isHighlighted:(_Bool)arg6 isEnabled:(_Bool)arg7 isExpanded:(_Bool)arg8 isShhModeIndicatorEnabled:(_Bool)arg9 backgroundColor:(id)arg10 emphasizedActionColor:(id)arg11 duplicationId:(long long)arg12 sectionType:(long long)arg13 oneTapSendViewModel:(id)arg14 presenceDigest:(id)arg15 avatarSpec:(id)arg16 hasDynamicHeight:(_Bool)arg17 displayNameType:(long long)arg18 nicknameManager:(id)arg19 module:(id)arg20 currentUser:(id)arg21 positionInSection:(id)arg22 absolutePosition:(id)arg23 sectionPosition:(id)arg24 queryString:(id)arg25 state:(long long)arg26 featureSets:(id)arg27;
- (id)accessibilityLabel;
- (int)recipientTargetType;
- (id)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (unsigned long long)subtitleAccessoryType;
- (_Bool)showDottedCircleAccessoryView;
- (_Bool)showLoadingIndicatorAccessoryView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

