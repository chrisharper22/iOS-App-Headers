//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface IGDiscussionStickerModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pk;
    NSString *_question;
    NSString *_subtitle;
    NSString *_socialContextString;
    NSString *_textColor;
    NSString *_backgroundColor;
    NSString *_secondaryTextColor;
    NSString *_secondaryBackgroundColor;
    NSArray *_facepileUsers;
    NSNumber *_commentCount;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(readonly, copy, nonatomic) NSArray *facepileUsers; // @synthesize facepileUsers=_facepileUsers;
@property(readonly, copy, nonatomic) NSString *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(readonly, copy, nonatomic) NSString *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(readonly, copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *socialContextString; // @synthesize socialContextString=_socialContextString;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 question:(id)arg2 subtitle:(id)arg3 socialContextString:(id)arg4 textColor:(id)arg5 backgroundColor:(id)arg6 secondaryTextColor:(id)arg7 secondaryBackgroundColor:(id)arg8 facepileUsers:(id)arg9 commentCount:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (_Bool)isPublished;

@end

