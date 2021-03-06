//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSmartStickerModelType-Protocol.h>
#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class CLLocation, IGLocation, NSArray, NSString;

@interface IGUniversalLocationStickerModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>
{
    NSString *_pk;
    IGLocation *_location;
    NSArray *_stickers;
    CLLocation *_mediaEXIFLocation;
}

+ (_Bool)supportsSecureCoding;
+ (id)placeholderLocation;
+ (id)defaultStyles;
+ (id)defaultLocationSticker;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *mediaEXIFLocation; // @synthesize mediaEXIFLocation=_mediaEXIFLocation;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (unsigned long long)smartStickerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool includeInRecent;
- (void)configureWithLocation:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithPk:(id)arg1 stickers:(id)arg2 mediaEXIFLocation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

