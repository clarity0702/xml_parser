//
// Created by jihaipeng on 2022/11/15.
//

#ifndef XML_PARSER_PARSER_H
#define XML_PARSER_PARSER_H


#pragma once

#include "Xml.h"
#include <string>
using namespace std;

namespace yazi {
    namespace xml {

        class Parser
        {
        public:
            Parser();
            bool load_file(const string & file);
            bool load_string(const string & str);
            Xml parse();

        private:
            void skip_white_space();
            bool parse_declaration();
            bool parse_comment();
            Xml parse_element();
            string parse_element_name();
            string parse_element_text();
            string parse_element_attr_key();
            string parse_element_attr_val();

        private:
            string m_str;
            int m_idx;
        };

    }
}


#endif //XML_PARSER_PARSER_H
