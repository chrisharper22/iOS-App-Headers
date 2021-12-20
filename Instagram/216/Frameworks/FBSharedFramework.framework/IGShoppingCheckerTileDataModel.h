//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGShoppingProductFeedDestination, IGShoppingUnifiedProductFeedResponse, NSNumber, NSString;

@interface IGShoppingCheckerTileDataModel : FBValueObject <NSCopying, NSCoding>
{
    long long _type;
    long long _titleType;
    NSString *_label;
    NSString *_subtitle;
    long long _displayStyle;
    NSNumber *_totalItemCount;
    IGShoppingUnifiedProductFeedResponse *_productFeed;
    IGShoppingProductFeedDestination *_destination;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingProductFeedDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) IGShoppingUnifiedProductFeedResponse *productFeed; // @synthesize productFeed=_productFeed;
@property(readonly, copy, nonatomic) NSNumber *totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(readonly, nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 titleType:(long long)arg2 label:(id)arg3 subtitle:(id)arg4 displayStyle:(long long)arg5 totalItemCount:(id)arg6 productFeed:(id)arg7 destination:(id)arg8;
- (id)initWithCoder:(id)arg1;

@end
