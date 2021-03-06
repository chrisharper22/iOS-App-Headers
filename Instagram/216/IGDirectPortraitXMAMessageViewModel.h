//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectPortraitXMAMessageViewModel : IGValueObject <IGListDiffable, IGDirectMessageViewModelProtocol, NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)portraitXmaViewModelWithMessageCellViewModel:(id)arg1 messageModel:(id)arg2 messageMetadata:(id)arg3 imageSpecifierResolver:(CDUnknownBlockType)arg4 launcherSetProvider:(id)arg5;
+ (id)portraitXmaViewModelWithMessageCellViewModel:(id)arg1 expiredPlaceholder:(id)arg2;
+ (id)portraitXmaViewModelWithMessageCellViewModel:(id)arg1 portraitXmaMessage:(id)arg2;
+ (id)portraitXmaViewModelWithMessageCellViewModel:(id)arg1 itemType:(long long)arg2 systemText:(id)arg3 previewImageSpecifier:(id)arg4 previewImageSize:(struct CGSize)arg5 headerText:(id)arg6 headerImageSpecifier:(id)arg7 headerImageSize:(struct CGSize)arg8 footerText:(id)arg9 contentAttributionIconType:(long long)arg10 mediaOverlayModel:(id)arg11 privateMediaOverlayModel:(id)arg12 placeholderText:(id)arg13 bubbleText:(id)arg14 giphyModel:(id)arg15 messageMetadata:(id)arg16 contentType:(id)arg17 isExpired:(_Bool)arg18 isPersisted:(_Bool)arg19 quickReaction:(id)arg20 targetURL:(id)arg21;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

