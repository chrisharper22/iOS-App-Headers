//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MOSProgressiveJPEGProtocol-Protocol.h>

@class NSArray, NSString;

@interface MOSProgressiveJPEG : NSObject <MOSProgressiveJPEGProtocol>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _format;
    unsigned long long _colorSpace;
    NSArray *_scanOffsets;
    unsigned long long _lastScanOffset;
    unsigned long long _offsetToStartEnumeratingMarkers;
    unsigned long long _lastScanCount;
    _Bool _parsedHeader;
    _Bool _reachedEoF;
    struct _MOSProgressiveJPEGConfig _config;
    unsigned long long _masterScan;
    struct Optional<MOSPJPEGEncodingInfo> _encodingInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
- (CDStruct_72138f47)createImageByReplacingSOSForScanNumber:(unsigned long long)arg1 fromData:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfScans;
- (_Bool)isFullyLoaded;
- (id)scanOffsets;
- (id)getBestImageWithNewBytes:(id)arg1;
- (id)updateBytes:(id)arg1;
- (_Bool)_readHeaderFromData:(id)arg1;
- (void)_readImageDimensionInformationFromData:(id)arg1 marker:(unsigned char)arg2 offset:(unsigned long long)arg3;
- (void)_parseColorSpaceInformation:(unsigned long long)arg1;
- (struct _AppendBytesResult)_appendBytes:(id)arg1;
- (_Bool)_foundNewScanInData:(id)arg1;
- (unsigned long long)_scanToNotifyFromBestScan:(unsigned long long)arg1;
- (unsigned long long)getBestScanNumber;
- (id)initWithConfig:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

