//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableString, NSObject<NSXMLParserDelegate>, NSXMLElement;

@interface IFNSXMLSacsToDom : NSObject <NSXMLParserDelegate>
{
    NSObject<NSXMLParserDelegate> *_parentParser;
    NSXMLElement *_root;
    NSMutableArray *_elementStack;
    NSMutableString *_stringAccumulator;
}

- (id)rootElement;
- (void)dealloc;
- (id)initForParser:(id)arg1 withRootName:(id)arg2 andAttributes:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end

