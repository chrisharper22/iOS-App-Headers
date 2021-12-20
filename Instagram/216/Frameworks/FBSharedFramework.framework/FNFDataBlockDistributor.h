//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBDataBlockConsumer;

@interface FNFDataBlockDistributor : NSObject
{
    struct mutex _lock;
    struct map<FBDataSegment, NSData *, cmpOfDataSegment, std::allocator<std::pair<const FBDataSegment, NSData *>>> _dataSegments;
    _Bool activeHeads[3];
    unsigned long long starvingHeads[3];
    unsigned long long heads[3];
    char *stitches[3];
    _Bool _shouldCacheLoadedData;
    _Bool _allowsToDecreaseHead;
    id <FBDataBlockConsumer> _consumer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsToDecreaseHead; // @synthesize allowsToDecreaseHead=_allowsToDecreaseHead;
@property(nonatomic) __weak id <FBDataBlockConsumer> consumer; // @synthesize consumer=_consumer;
- (void)dealloc;
- (unsigned long long)availableOffsetForHeadType:(unsigned long long)arg1;
- (unsigned long long)offsetForHeadType:(unsigned long long)arg1;
- (const char *)_unlockedBytesAtHead:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (const char *)bytesAtHead:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (void)moveHeadTo:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2 allowDataPurge:(_Bool)arg3;
- (void)moveHeadTo:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (void)removeHeadType:(unsigned long long)arg1;
- (void)addHeadType:(unsigned long long)arg1 withOffset:(unsigned long long)arg2;
- (void)deliverData:(id)arg1 withOffset:(unsigned long long)arg2;
- (id)description;
- (id)initWithShouldCacheLoadedData:(_Bool)arg1;

@end
