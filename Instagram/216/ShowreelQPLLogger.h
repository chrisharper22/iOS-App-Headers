//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ShowreelQPLLogger : NSObject
{
    int _markerId;
    int _markerInstanceId;
    NSDictionary *_commonMarkerAnnotationDict;
    NSDictionary *_extraMarkerAnnotationDict;
    _Bool _separatePointDataIntoColumns;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool separatePointDataIntoColumns; // @synthesize separatePointDataIntoColumns=_separatePointDataIntoColumns;
- (void)_markPoint:(id)arg1 data:(id)arg2;
- (id)_markerAnnotationDict;
- (void)_endMarkerWithAction:(short)arg1;
- (void)_startMarkerWithAnnotation:(id)arg1;
- (void)addExtraMarkerAnnotation:(id)arg1;
- (void)endLoggingWithAction:(unsigned long long)arg1;
- (void)startLogging;
- (void)logPointNamed:(id)arg1 data:(id)arg2;
- (id)initWithMarkerId:(int)arg1 commonInfo:(id)arg2 customInfo:(id)arg3;

@end
