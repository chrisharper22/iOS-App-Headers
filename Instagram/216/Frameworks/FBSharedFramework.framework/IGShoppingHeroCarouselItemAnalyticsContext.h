//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, NSString;

@interface IGShoppingHeroCarouselItemAnalyticsContext : NSObject
{
    NSString *_pk;
    NSString *_type;
    unsigned long long _index;
    unsigned long long _totalItemCount;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) unsigned long long totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)initWithPk:(id)arg1 type:(id)arg2 index:(unsigned long long)arg3 totalItemCount:(unsigned long long)arg4 media:(id)arg5;

@end
